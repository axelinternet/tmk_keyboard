#include <stdint.h>
#include <stdbool.h>
#include <avr/io.h>
#include <util/delay.h>
#include "print.h"
#include "debug.h"
#include "util.h"
#include "matrix.h"


#ifndef DEBOUNCE
#   define DEBOUNCE	5
#endif
static uint8_t debouncing = DEBOUNCE;

/* matrix state(1:on, 0:off) */
static matrix_row_t matrix[MATRIX_ROWS];
static matrix_row_t matrix_debouncing[MATRIX_ROWS];


static matrix_row_t read_cols(void);
static void init_cols(void);
static void unselect_rows(void);
static void select_row(uint8_t row);


inline
uint8_t matrix_rows(void)
{
    return MATRIX_ROWS;
}

inline
uint8_t matrix_cols(void)
{
    return MATRIX_COLS;
}

void matrix_init(void)
{
    // disable JTAG
    MCUCR |= (1 << JTD);
    MCUCR |= (1 << JTD);

    // initialize row and col
    unselect_rows();
    init_cols();

    // initialize matrix state: all keys off
    for (uint8_t i=0; i < MATRIX_ROWS; i++) {
        matrix[i] = 0;
        matrix_debouncing[i] = 0;
    }
}

uint8_t matrix_scan(void)
{
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        select_row(i);
        _delay_us(30);  // without this wait read unstable value.
        matrix_row_t cols = read_cols();
        if (matrix_debouncing[i] != cols) {
            matrix_debouncing[i] = cols;
            if (debouncing) {
                debug("bounce!: "); debug_hex(debouncing); debug("\n");
            }
            debouncing = DEBOUNCE;
        }
        unselect_rows();
    }

    if (debouncing) {
        if (--debouncing) {
            _delay_ms(1);
        } else {
            for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
                matrix[i] = matrix_debouncing[i];
            }
        }
    }

    return 1;
}

bool matrix_is_modified(void)
{
    if (debouncing) return false;
    return true;
}

inline
bool matrix_is_on(uint8_t row, uint8_t col)
{
    return (matrix[row] & ((matrix_row_t)1<<col));
}

inline
matrix_row_t matrix_get_row(uint8_t row)
{
    return matrix[row];
}

void matrix_print(void)
{
    print("\nr/c 0123456789ABCDEF\n");
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        phex(row); print(": ");
        pbin_reverse16(matrix_get_row(row));
        print("\n");
    }
}

uint8_t matrix_key_count(void)
{
    uint8_t count = 0;
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        count += bitpop16(matrix[i]);
    }
    return count;
}

static void init_cols(void) {
    DDRD  &= ~(1 << 7);
    PORTD |=  (1 << 7);
    DDRE  &= ~(1 << 6);
    PORTE |=  (1 << 6);
    DDRB  &= ~(1 << 4 | 1 << 5 | 1 << 1 | 1 << 3 | 1 << 2 | 1 << 6);
    PORTB |=  (1 << 4 | 1 << 5 | 1 << 1 | 1 << 3 | 1 << 2 | 1 << 6);
    DDRF  &= ~(1 << 4 | 1 << 5 | 1 << 6 | 1 << 7);
    PORTF |=  (1 << 4 | 1 << 5 | 1 << 6 | 1 << 7);
}

static matrix_row_t read_cols(void) {
    return
        (PIND & (1 << 7) ? 0 : (1UL <<  0)) |
        (PINE & (1 << 6) ? 0 : (1UL <<  1)) |
        (PINB & (1 << 4) ? 0 : (1UL <<  2)) |
        (PINB & (1 << 5) ? 0 : (1UL <<  3)) |
        (PINF & (1 << 4) ? 0 : (1UL <<  4)) |
        (PINF & (1 << 5) ? 0 : (1UL <<  5)) |
        (PINF & (1 << 6) ? 0 : (1UL <<  6)) |
        (PINF & (1 << 7) ? 0 : (1UL <<  7)) |
        (PINB & (1 << 1) ? 0 : (1UL <<  8)) |
        (PINB & (1 << 3) ? 0 : (1UL <<  9)) |
        (PINB & (1 << 2) ? 0 : (1UL << 10)) |
        (PINB & (1 << 6) ? 0 : (1UL << 11));
}

static void unselect_rows(void) {
    DDRD  &= ~0b00011111;
    PORTD &= ~0b00011111;
    DDRC  &= ~0b01000000;
    PORTC &= ~0b01000000;
}

static void select_row(uint8_t row) {
    switch (row) {
        case 0:
            DDRD  |=  (1 << 3);
            PORTD &= ~(1 << 3);
            break;
        case 1:
            DDRD  |=  (1 << 2);
            PORTD &= ~(1 << 2);
            break;
        case 2:
            DDRD  |=  (1 << 1);
            PORTD &= ~(1 << 1);
            break;
        case 3:
            DDRD  |=  (1 << 0);
            PORTD &= ~(1 << 0);
            break;
        case 4:
            DDRD  |=  (1 << 4);
            PORTD &= ~(1 << 4);
            break;
        case 5:
            DDRC  |=  (1 << 6);
            PORTC &= ~(1 << 6);
            break;
    }
};
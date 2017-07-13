# Garbage ANSI-ISO hybrid

A 60% keyboard build that combines ANSI and ISO layouts. I built mine using parts I found in a dumpster and a Pro Micro. This layout uses 61 keys so I had to get a bit creative to get around the 18 pin limit. I went for a 6 row 12 column matrix that is a bit of a pain to solder all the wires for but you don't have to solder to the LED's on the Pro Micro.  

Firmware built by TMK Firmware Builder - http://kb.sized.io/. Forked the tmk_keyboard repo to show were it came from but the firmware generated from the builder is not 100% compatible so had to change out the tmk_core to the one that TMK Firmware Builder supplies. 

Layout designed using http://www.keyboard-layout-editor.com/. 

I find it easiest to flash using avrdude. For me the command is ```sudo avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 -b 57600 -U flash:w:firmware.hex ```. Adjust to taste or use other tools, better instructions are available in the tmk_keyboard README. 
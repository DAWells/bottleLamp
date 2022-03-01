# Bottle lamp

## Project aim
Make a colourful lamp housed in an old bottle. This lamp is powered
by an arduino Pro Micro (5V). Connecting this board to the arduino
IDE is described on this sparkfun
[post](https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/all#example-1-blinkies).
The LEDs are a strip of individually addressable WS2812B 5050 LEDs.
The data pin is pin 7 and uses a 330 Ohm resistor.

There are several simple light functions defined in separate files.
The arduino is set up in `main.ino` and then it calls a specific function.

### Bright cycle
Single colour increasing brightness before reset.

### Gamma fade
The opposite of bright cycle but uses scale8_video.

### Hue flood
All LEDs are the same colour and one by one they change to the next hue, repeat.

### Hue front
A front `i` sweeps through the leds and their colour is determined
by their distance from `i`.

### Hue sweep
All LEDs cycle through the rainbow but their colour at any given moment
is determined by their position in the strip.

### Light run
A single LED is a different colour and it runs down the strip. In
`light_run1` only that LED is lit.

### Wave
Colours change according to a sine wave, the exact colour
is determined by the LEDs position in the strip.
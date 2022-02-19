#include <FastLED.h>

void wave(int rate, int wait) {
  // int gap=rate/NUM_LEDS;
  for (int x=0; x<256; x++){
    for (int i=0; i<NUM_LEDS; i++){
      int xi = x+rate*i;
      int hue = sin8(xi);
      leds[i] = CHSV(hue, 255, 120);
    }
    FastLED.show();
    delay(wait);
  }
}
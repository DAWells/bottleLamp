#include <FastLED.h>

void wave(int rate, int wait, int hue) {
  int gap=256/NUM_LEDS;
  for (int x=0; x<256; x+=rate){
    // fill_solid(leds, NUM_LEDS, CHSV(hue, 255, value));
    for (int i=0; i<NUM_LEDS; i++){
      int xi=x+gap*i;
      int value = sin8(xi);
      // int hue = sin8(xi);
      leds[i] = CHSV(hue, 255, value);
    }
    FastLED.show();
    delay(wait);
  }
}
#include <FastLED.h>

void hue_flood(int rate, int wait) {
  int saturation=255;
  int value=75;
  for (int hue=0; hue<256; hue += rate){
    for (int i=0; i<NUM_LEDS; i++){
      leds[i] = CHSV(hue, saturation, value);
      FastLED.show();
      delay(wait);
    }
  }
}
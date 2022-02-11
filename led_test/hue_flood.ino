#include <FastLED.h>

void hue_flood(int num_leds, int rate, int wait, int saturation, int value) {
  for (int hue=0; hue<256; hue += rate){
    for (int i=0; i<num_leds; i++){
      leds[i] = CHSV(hue, saturation, value);
      FastLED.show();
      delay(wait);
    }
  }
}
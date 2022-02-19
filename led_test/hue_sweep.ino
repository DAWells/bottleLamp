#include <FastLED.h>

void hue_sweep(int rate, int wait) {
  int value = 120;
  int saturation = 255;
  for(int hue=0; hue<256; hue++){
    for(int i=0; i<NUM_LEDS; i++){
      leds[i] = CHSV(hue+(i*rate), saturation, value);
    }
    FastLED.show();
    delay(wait);
  }
}

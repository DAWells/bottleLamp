#include <FastLED.h>

void light_run(int wait, int hue, int delta) {
  int saturation=255;
  int value=75;
  for (int runner=0; runner<NUM_LEDS; runner++){
    for (int i=0; i<NUM_LEDS; i++){
      leds[i] = CHSV(hue, saturation, value);
    }
    leds[runner] = CHSV(hue-delta, saturation, value);
    FastLED.show();
    delay(wait);
  }
}
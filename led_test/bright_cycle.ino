#include <FastLED.h>

void bright_cycle(int rate, int wait, int hue) {
  for (int i=0; i<100; i+=rate){
    fill_solid(leds, NUM_LEDS, CHSV(hue, 255, i));
    FastLED.show();
    delay(wait);
  }
}

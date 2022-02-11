#include <FastLED.h>

void gamma_fade(int hue) {
  int value=100;
  fill_solid(leds, NUM_LEDS, CHSV(hue, 255, value));
  FastLED.show();
  delay(250);
  for (int i=0; i<10; i++){
    value = scale8_video(value, 200);
    fill_solid(leds, NUM_LEDS, CHSV(hue, 255, value));
    FastLED.show();
    delay(250);
  }
  
}
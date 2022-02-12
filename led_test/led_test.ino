#include <FastLED.h>

# define LED_PIN     7
# define NUM_LEDS 5

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}
void loop(){
  // hue_flood(10, 50);
  // light_run(250, random8(), random16());
  wave(5, 100, 72);
  // int hue=random8();
  // bright_cycle(10, 100, hue);
  // gamma_fade(hue);
}

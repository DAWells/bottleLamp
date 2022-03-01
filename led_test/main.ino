#include <FastLED.h>

# define LED_PIN     7
# define NUM_LEDS 20

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}

// Used for hue front
uint8_t hue = 0;

void loop(){
  hue_sweep(10, 50);
  // hue_front(100, 50);
  // hue_flood(200, 200);
  // light_run(250, random8(), random16());
  // light_run1(250, random8(), random16());
  // wave(1, 50);
  // int hue=random8();
  // bright_cycle(10, 100, hue);
  // gamma_fade(hue);
}

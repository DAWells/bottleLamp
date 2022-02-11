#include <FastLED.h>

#define LED_PIN     7
# define NUM_LEDS 5

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}
// void loop() {
//   for (int hue=0; hue<256; hue += 50){
//     for (int i=0; i<NUM_LEDS; i++){
//       leds[i] = CHSV(hue, 255, 100);
//       FastLED.show();
//       delay(50);
//     }
//   }
// }
void loop() {
  for (int j=0; j<NUM_LEDS; j++){
    for (int i=0; i<NUM_LEDS; i++){
      leds[i] = CHSV(160, 255, 100);
    }
    leds[j] = CHSV(0, 255, 100);
    FastLED.show();
    delay(50);
  }
}

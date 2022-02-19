#include <FastLED.h>

#include <FastLED.h>

// int modifier(int i, int x, int delta){
//   int m = 0;
//   if(i < x){
//     m = delta;
//   }
//   return m;
// }

int modifier(int i, int x, int delta){
  int m = 0;
  if(i < x){
    m = min((x-i), NUM_LEDS) * delta/NUM_LEDS;
  }
  return m;
}

void hue_front(int rate, int wait){
  int saturation = 255;
  int value = 120;
  for (int front=0; front<(2*NUM_LEDS); front++){
    for (int i=0; i<NUM_LEDS; i++){
      int m = modifier(i, front, rate);
      leds[i] = CHSV(hue+m, saturation, value);
    }
    FastLED.show();
    delay(wait);
  }
  hue += rate;
}
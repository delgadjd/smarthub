#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS_1 109
#define DATA_PIN_1 0
#define BRIGHTNESS 100
CRGB leds_1[NUM_LEDS_1];
int ledOn = NUM_LEDS_1;

void setup() {
  
  FastLED.addLeds<NEOPIXEL, DATA_PIN_1>(leds_1, NUM_LEDS_1);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  allWhite();
}

void allWhite() {
  // LED Strip #1
  for (int i = 0; i < NUM_LEDS_1; i += 5) {
    leds_1[i] = CRGB::White;
    FastLED.show();
    leds_1[i] = CRGB::Black;
  }
}

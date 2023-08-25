#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS_1 144

#define DATA_PIN_1 6

#define BRIGHTNESS 50
CRGB leds_1[NUM_LEDS_1];

int ledOn = NUM_LEDS_1;

void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
  FastLED.addLeds<NEOPIXEL, DATA_PIN_1>(leds_1, NUM_LEDS_1);

  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  allWhite();
  //testRGB();
}

void allWhite() {
   // LED Strip #1
  for (int i = 0; i < NUM_LEDS_1; ++i) {
    leds_1[i] = CRGB::White;
  }
  FastLED.show();
}

void testRGB() {
  // LED Strip #1
  for (int i = 0; i < NUM_LEDS_1; ++i) {
    leds_1[i] = CRGB::Red;
  }
  FastLED.show();
  delay(1000);


  FastLED.show();
  delay(1000);
}

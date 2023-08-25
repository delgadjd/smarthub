#include <Adafruit_NeoPixel.h>

long randNumber;
#define PIN 0
#define NUMPIXELS 144

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 50;

void setup() {
  // put your setup code here, to run once:
  pixels.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int r = random(128);
  int g = random(128);
  int b = random(128);

    for(int i=110; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(r,g,b));
      pixels.show();
      delay(delayval);
     
      }
      
}

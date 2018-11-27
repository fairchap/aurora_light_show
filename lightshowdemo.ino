#include "application.h"
#include "neopixel/neopixel.h"

// IMPORTANT: Set pixel COUNT, PIN and TYPE
#define PIXEL_COUNT 900
#define PIXEL_PIN D6  //CHANGE DEPENDING ON WHAT PIN THE LEDS ARE CONNECTED TO
#define PIXEL_TYPE WS2812B

#define PEACH 200,50,5
#define CYAN 10,150,70
#define PURPLE 180,3,180
#define BLUE 5,5,190
#define WHITE 150,150,150
#define GREEN 10,180,10

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

int waitTime = 25;
int i;
void spin(int R, int G, int B);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
    spin (PEACH);
    spin (CYAN);
    spin (PURPLE);
    spin (BLUE);
    spin (WHITE);
    spin (GREEN);
}

void spin(int R, int G, int B) {
    for(i=0; i < PIXEL_COUNT; i++) {
        strip.setPixelColor(i, R,G,B);
        strip.show();
        delay(waitTime);
    }
    for(i=0; i < PIXEL_COUNT; i++) {
        strip.setPixelColor(i, 0,0,0);
        strip.show();
        delay(waitTime);
    }
}

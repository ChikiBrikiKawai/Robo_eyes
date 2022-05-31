#include <FastLED.h>



#define NUM_LEDS 8 // указываем количество светодиодов на ленте
#define PIN 4                    // указываем пин для подключения ленты

CRGB leds[NUM_LEDS];
byte counter;
long time1=0;

void setup() {
   // основные настройки для адресной ленты
   FastLED.addLeds <WS2812, PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
   FastLED.setBrightness(255);
   pinMode(4, OUTPUT);
}

void loop()
{
  for(int i= 0; i<8; i++) {
    leds[i] = CHSV(139,255, counter + i * 1);
  }
  counter++;
  FastLED.show();
  delay(10);
   
}

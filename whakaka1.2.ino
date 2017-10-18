/** 
 *  [PUMAU] POUTAMA 2
 *  Me whakakā ngā rama katoa i te wā orite, kātahi, ka whakapoko i ngā rama katoa.
 *  YOUTUBE: 
 */
#include "FastLED.h"

//Tāutu te kaute LED
#define KAUTE_LED 1

//Whakarite i te pine Atuino ka whakamahia
#define PINE_ATUINO 5

//Whakarite i ngā wāriu RGB mo whero, kakariki me kikorangi
#define WHERO 0
#define KAKARIKI 100
#define KIKORANGI 100

//Whakarite i ngā raiti LED
CRGB raiti[KAUTE_LED];

void setup() {
  // put your setup code here, to run once:
  delay(1000);

  LEDS.addLeds<WS2812B,PINE_ATUINO,GRB>(raiti,KAUTE_LED);
  LEDS.setBrightness(50);

}

void loop() {
  
  raiti[0] = CRGB(WHERO,KAKARIKI,KIKORANGI);
  FastLED.show();

}

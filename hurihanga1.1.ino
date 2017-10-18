/** 
 *  [PŪMAU, ROOPU] POUTAMA 1 - Tohutohu Pūmau
 *  Me whakakā kotahi te raiti ia wā, timata i te raiti tuatahi. E rua ngā raiti LED kei runga i te taura RGB nei.
 *  YOUTUBE: 
 */
#include "FastLED.h"

//E hia ngā LED kei runga i te taura RGB?
#define KAUTE_LED 2

//Whakarite i te pine Atuino ka whakamahia
#define PINE_ATUINO 5

//Whakamōhio ki te pūmanawa kei te whakamahi tātau he taura RGB, me te nui o ngā raiti kei runga i te taura nei
CRGB raiti[KAUTE_LED];

void setup() {
  // put your setup code here, to run once:
  delay(500);

  LEDS.addLeds<WS2812B,PINE_ATUINO,GRB>(raiti,KAUTE_LED);
  LEDS.setBrightness(50);
}

void loop(){

  raiti[0] = CRGB(100,0,100); //LED tuatahi
  raiti[1] = CRGB(0,0,0);    //LED tuarua
  FastLED.show();
  delay(500);
  raiti[0] = CRGB(0,0,0);   //LED tuatahi
  raiti[1] = CRGB(100,0,100);  //LED tuarua
  FastLED.show();
  delay(500);
}



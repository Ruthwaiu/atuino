/** 
 *  POUTAMA 3 TOHUTOHU PŪMAU [Pūmau, Roopu, Hokihoki, Tohutohu Motuhake] 
 *  Me whakakā ngā raiti katoa i te wā orite.
 *  Pukenga TOHUTOHU MOTUHAKE: Ka tuhi ētahi tohutohu motuhake hei whakatūtuki i tētahi mahi motuhake
 *  YOUTUBE: 
 */
#include "FastLED.h"

//Tāutu te kaute LED
#define KAUTE_LED 3

//Whakarite i te pine Atuino ka whakamahia
#define PINE_ATUINO 5

//Whakarite i ngā raiti LED
CRGB raiti[KAUTE_LED];

void setup() {
  // Tatari 1 hēkona i mua i te whakaatu i ngā raiti
  delay(1000);

  LEDS.addLeds<WS2812B,PINE_ATUINO,RGB>(raiti,KAUTE_LED);
  LEDS.setBrightness(50);
}

void loop() {
  // Ia hurihanga motuhake ka tīni ngā kara o ngā raiti ki tētahi kara hou
  whakaka(25,170,50);
  whakaka(125,25,50);
  whakaka(25,70,250);
}

/**
 * Anei ngā tohutohu motuhake mo tēnei papatono.
 * Ka pānui enei tohutohu i ngā wāriu RGB mai i ngā tohutohu matua, kātahi, ka tini te kara o ngā raiti katoa
 * Ka karangahia enei tohutohu ki nga rarangi 28,29 me 30
 */
void whakaka(int whero, int kakariki, int kikorangi){

  for(int i=0;i < KAUTE_LED; i++){
    delay(500);
    raiti[i] = CRGB(whero,kakariki,kikorangi);
  }
  FastLED.show();
  
}

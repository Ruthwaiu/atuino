/** 
 *  POUTAMA 3 TŪMAHI [PUMAU, ROOPU, HOKIHOKI, TOHUTOHU MOTUHAKE] 
 *  Me whakakā kotahi te raiti ia wā, timata i te raiti tuatahi. E toru ngā raiti LED kei runga i te taura RGB nei.
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
  hurihanga(25,170,50);
  hurihanga(125,25,50);
  hurihanga(25,70,250);
}

//Ka timata te whakakā kotahi te raiti i te wā, katahi, ka timata ano
void hurihanga(int whero, int kakariki, int kikorangi){

  for(int i=0;i < KAUTE_LED; i++){
    delay(500);
    raiti[i] = CRGB(whero,kakariki,kikorangi); //whakaritea kia .... nga raiti
    FastLED.show();
    raiti[i] = CRGB(0,0,0);  //whakaritea kia pango nga raiti
  }
  
}


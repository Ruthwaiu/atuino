/** 
 *  POUTAMA 2 - Hokihoki  [PŪMAU, ROOPU, HOKIHOKI]
 *  Me whakakā kotahi te raiti ia wā, timata i te raiti tuatahi. E toru ngā raiti LED kei runga i te taura RGB nei.
 *  Ko te pukenga hokihoki, he whakamahi 'for loop' ki te neke haere ki ia raiti LED
 *  YOUTUBE: 
 */
#include "FastLED.h"

//E hia ngā LED kei runga i te taura RGB?
#define KAUTE_LED 3

//Whakarite i te pine Atuino ka whakamahia
#define PINE_ATUINO 5

//Whakarite i ngā wāriu RGB mo whero, kakariki me kikorangi
// ---->RĀWEKEWEKE I ĒNEI WĀRIU KIA PUTA HE KARA REREKĒ <--------
#define WHERO 100
#define KAKARIKI 0
#define KIKORANGI 100

//Whakamōhio ki te pūmanawa kei te whakamahi tātau he taura RGB, me te nui o ngā raiti kei runga i te taura nei
CRGB raiti[KAUTE_LED];

void setup() {
  // put your setup code here, to run once:
  delay(1000);

  LEDS.addLeds<WS2812B,PINE_ATUINO,GRB>(raiti,KAUTE_LED);
  LEDS.setBrightness(50);
}

void loop() {

 for(int i=0;i < KAUTE_LED; i++){
    delay(1000);
    raiti[i] = CRGB(WHERO,KAKARIKI,KIKORANGI); //whakaritea ngā kara ki ngā wāriu pūmau kei runga
    FastLED.show();
    raiti[i] = CRGB(0,0,0);  //whakaritea kia pango nga raiti
  }
}


/** 
 *  POUTAMA 2 - Hokihoki  [PŪMAU, ROOPU, HOKIHOKI]
 *  Me whakakā te katoa o ngā raiti i te wā ōrite. E ono ngā raiti LED kei runga i te taura RGB nei.
 *  Pukenga HOKIHOKI: he whakamahi 'for loop' ki te neke haere ki ia raiti LED
 *  YOUTUBE: 
 */
 
 #include "FastLED.h"

//E hia ngā LED kei runga i te taura RGB?
#define KAUTE_LED 6

//Whakarite i te pine Atuino ka whakamahia
#define PINE_ATUINO 5

//Whakarite i ngā wāriu RGB mo whero, kakariki me kikorangi
// ---->RĀWEKEWEKE I ĒNEI WĀRIU KIA PUTA HE KARA REREKĒ <--------
#define WHERO 100
#define KAKARIKI 0
#define KIKORANGI 100

//Whakarite i ngā raiti LED
CRGB raiti[KAUTE_LED];

void setup() {

  delay(1000); //Tatari 2 hēkona

  LEDS.addLeds<WS2812B,PINE_ATUINO,GRB>(raiti,KAUTE_LED);
  LEDS.setBrightness(50); //Whakaheke te kaha o ngā rama ki te 50
}

void loop() {

  delay(1000);
  for(int i=0;i<KAUTE_LED;i++){
    raiti[i] = CRGB(WHERO, KAKARIKI, KIKORANGI); 
  }
  FastLED.show();

  delay(1000);
  for(int i=0;i<KAUTE_LED;i++){
    raiti[i] = CRGB(0, 0, 0); 
  }
  FastLED.show();
}

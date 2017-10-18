/** 
 *  POUTAMA 1 - TOHUTOHU PŪMAU [Pūmau, Roopu] 
 *  Me whakakā ngā raiti katoa i te wā orite, kātahi, ka whakapoko.
 *  YOUTUBE: 
 */
#include "FastLED.h"

//E hia ngā raiti LED kei runga i te taura RGB?
#define KAUTE_LED 6

//Whakarite i te pine Atuino ka whakamahia
#define PINE_ATUINO 5

//Whakarite i ngā wāriu RGB mo whero, kakariki me kikorangi
//--->RĀWEKEWEKE I NGĀ WĀRIU NEI KI TE TĪNI I TE KARA O NGĀ RAITI KATOA <---
#define WHERO 0
#define KAKARIKI 100
#define KIKORANGI 100

//Whakamōhio ki te pūmanawa kei te whakahaere taura RGB tātau
CRGB raiti[KAUTE_LED];

void setup() {
  // put your setup code here, to run once:
  delay(1000);

  LEDS.addLeds<WS2812B,PINE_ATUINO,GRB>(raiti,KAUTE_LED);
  LEDS.setBrightness(50);
}

void loop() {
  
  delay(1000);
  //Whakakā ngā raiti katoa [Hardcoded]  
  raiti[0] = CRGB(WHERO,KAKARIKI,KIKORANGI); //LED tuatahi
  raiti[1] = CRGB(WHERO,KAKARIKI,KIKORANGI); //LED tuarua
  raiti[2] = CRGB(WHERO,KAKARIKI,KIKORANGI); //LED tuatoru
  raiti[3] = CRGB(WHERO,KAKARIKI,KIKORANGI); //LED tuawha
  raiti[4] = CRGB(WHERO,KAKARIKI,KIKORANGI); //LED tuarima
  raiti[5] = CRGB(WHERO,KAKARIKI,KIKORANGI); //LED tuaono
  FastLED.show();
  
  delay(1000);
  //Whakapoko ngā raiti katoa
  raiti[0] = CRGB(0,0,0); //LED tuatahi
  raiti[1] = CRGB(0,0,0); //LED tuarua
  raiti[2] = CRGB(0,0,0); //LED tuatoru
  raiti[3] = CRGB(0,0,0); //LED tuawha
  raiti[4] = CRGB(0,0,0); //LED tuarima
  raiti[5] = CRGB(0,0,0); //LED tuaono
  FastLED.show();
  
}

/** 
 *  [PUMAU] POUTAMA 1
 *  Me whakakā i tētahi raiti RGB
 *  YOUTUBE: 
 */
#include "FastLED.h"

//E hia ngā LED kei runga i te taura RGB?
#define KAUTE_LED 1

//Whakarite i te pine Atuino ka whakamahia
#define PINE_ATUINO 5

//Whakamōhio ki te pūmanawa kei te whakamahi tātau he taura RGB, me te nui o ngā raiti kei runga i te taura nei
CRGB raiti[KAUTE_LED];

void setup() {
  //Tatari kotahi hēkona. (1000 mirihēkona)
  delay(1000);

  //Whakamōhio ki te pūmanawa i te momo taura RGB kei te whakamahi tātau
  LEDS.addLeds<WS2812B,PINE_ATUINO,GRB>(raiti,KAUTE_LED);
  
  //Whakaheke te kaha o te raiti kia kore mamae o whatu
  LEDS.setBrightness(50);

}

void loop() {
  
  raiti[0] = CRGB(255,255,255); //te raiti RGB tuatahi
  FastLED.show();
  
}

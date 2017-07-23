// Stranger Things Christmas Light
#include <FastLED.h>
#define NUM_LEDS 50
#define DATA_PIN 6
#define DELAY_DEFAULT 1000

CRGB leds[NUM_LEDS];
int rnd = 0;

void setup() {
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
  // seed random generator from input for more true randomness
  randomSeed (analogRead(0));
}

void loop() {
  //
  switch(rnd){
    case 0:
     CHRISTMAS();
     break;
    case 1:
     IMHERE();
     break;
    case 2:
     RUN();
     break;
    case 3:
     FLICKER();
     break;
  }
  rnd = random (0, 4);
}

void CHRISTMAS() {
   FastLED.clear();
 leds[0] = CRGB::Black;
 leds[1] = CRGB::Black;
 leds[2] = CRGB::Black;
 leds[3] = CRGB::Black;
 leds[4] = CRGB::Black;
 leds[5] = CRGB::Red;
 leds[6] = CRGB::Red;
 leds[7] = CRGB::Yellow;
 leds[8] = CRGB::Blue;
 leds[9] = CRGB::Red;
 leds[10] = CRGB::Blue;
 leds[11] = CRGB::Yellow;
 leds[12] = CRGB::White;
 leds[13] = CRGB::Green;
 leds[14] = CRGB::Black;
 leds[15] = CRGB::Black;
 leds[16] = CRGB::Black;
 leds[17] = CRGB::Yellow;
 leds[18] = CRGB::Red;//J
 leds[19] = CRGB::Blue;//K
 leds[20] = CRGB::Green;//L
 leds[21] = CRGB::Yellow;//M
 leds[22] = CRGB::Red;//N
 leds[23] = CRGB::Red;//O
 leds[24] = CRGB::Green;//P
 leds[25] = CRGB::Red;//Q
 leds[26] = CRGB::Black;
 leds[27] = CRGB::Black;
 leds[28] = CRGB::Black;
 leds[29] = CRGB::Black;
 leds[30] = CRGB::Blue;//H
 leds[31] = CRGB::Red;//G
 leds[32] = CRGB::Yellow;//F
 leds[33] = CRGB::Blue;//E
 leds[34] = CRGB::Green;//D
 leds[35] = CRGB::Red;//C
 leds[36] = CRGB::Blue;//B
 leds[37] = CRGB::Yellow;//A
 leds[38] = CRGB::Black;
 leds[39] = CRGB::Black;
 leds[40] = CRGB::Black;
 leds[41] = CRGB::Black;
 leds[42] = CRGB::Black;
 leds[43] = CRGB::Black;
 leds[44] = CRGB::Black;
 leds[45] = CRGB::Black;
 leds[46] = CRGB::Black;
 leds[47] = CRGB::Black;
 leds[48] = CRGB::Black;
 leds[49] = CRGB::Black;
 FastLED.show();
 delay(8000);
 //
 leds[0] = CRGB::Black;
 leds[1] = CRGB::Black;
 leds[2] = CRGB::Black;
 leds[3] = CRGB::Black;
 leds[4] = CRGB::Black;
 leds[5] = CRGB::Black;
 leds[6] = CRGB::Black;
 leds[7] = CRGB::Black;
 leds[8] = CRGB::Black;
 leds[9] = CRGB::Black;
 leds[10] = CRGB::Black;
 leds[11] = CRGB::Black;
 leds[12] = CRGB::Black;
 leds[13] = CRGB::Black;
 leds[14] = CRGB::Black;
 leds[15] = CRGB::Black;
 leds[16] = CRGB::Black;
 leds[17] = CRGB::Black;
 leds[18] = CRGB::Black;
 leds[19] = CRGB::Black;
 leds[20] = CRGB::Black;
 leds[21] = CRGB::Black;
 leds[22] = CRGB::Black;
 leds[23] = CRGB::Black;
 leds[24] = CRGB::Black;
 leds[25] = CRGB::Black;
 leds[26] = CRGB::Black;
 leds[27] = CRGB::Black;
 leds[28] = CRGB::Black;
 leds[29] = CRGB::Black;
 leds[30] = CRGB::Black;
 leds[31] = CRGB::Black;
 leds[32] = CRGB::Black;
 leds[33] = CRGB::Black;
 leds[34] = CRGB::Black;
 leds[35] = CRGB::Black;
 leds[36] = CRGB::Black;
 leds[37] = CRGB::Black;
 leds[38] = CRGB::Black;
 leds[39] = CRGB::Black;
 leds[40] = CRGB::Black;
 leds[41] = CRGB::Black;
 leds[42] = CRGB::Black;
 leds[43] = CRGB::Black;
 leds[44] = CRGB::Black;
 leds[45] = CRGB::Black;
 leds[46] = CRGB::Black;
 leds[47] = CRGB::Black;
 leds[48] = CRGB::Black;
 leds[49] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
}

void IMHERE() {
  FastLED.clear();
  // I
 leds[17] = CRGB::Blue;
 FastLED.show();
 delay(DELAY_DEFAULT);
 leds[17] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
 // M
 leds[21] = CRGB::Green;
 FastLED.show();
 delay(DELAY_DEFAULT);
 leds[21] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
 // H
  FastLED.clear();
 leds[30] = CRGB::Red;
 FastLED.show();
 delay(DELAY_DEFAULT);
 leds[30] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
 // E
 leds[33] = CRGB::Blue;
 FastLED.show();
 delay(DELAY_DEFAULT);
 leds[33] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
  // R
 leds[13] = CRGB::Blue;
 FastLED.show();
 delay(DELAY_DEFAULT);
 leds[13] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
 // E
 leds[33] = CRGB::Blue;
 FastLED.show();
 delay(DELAY_DEFAULT);
 leds[33] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
}

void RUN() {
  FastLED.clear();
 leds[13] = CRGB::Blue;
 FastLED.show();
 delay(DELAY_DEFAULT);
 //
 leds[13] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
 //
 leds[10] = CRGB::Green;
 FastLED.show();
 delay(DELAY_DEFAULT);
 //
 leds[10] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
 //
  FastLED.clear();
 leds[22] = CRGB::Red;
 FastLED.show();
 delay(DELAY_DEFAULT);
 //
 leds[22] = CRGB::Black;
 FastLED.show();
 delay(DELAY_DEFAULT);
}

void FLICKER() {
  for (int i=0; i <=6;i++){
   FastLED.clear();
 leds[0] = CRGB::Black;
 leds[1] = CRGB::Black;
 leds[2] = CRGB::Black;
 leds[3] = CRGB::Black;
 leds[4] = CRGB::Black;
 leds[5] = CRGB::Red;
 leds[6] = CRGB::Red;
 leds[7] = CRGB::Yellow;
 leds[8] = CRGB::Blue;
 leds[9] = CRGB::Red;
 leds[10] = CRGB::Blue;
 leds[11] = CRGB::Yellow;
 leds[12] = CRGB::White;
 leds[13] = CRGB::Green;
 leds[14] = CRGB::Black;
 leds[15] = CRGB::Black;
 leds[16] = CRGB::Black;
 leds[17] = CRGB::Yellow;
 leds[18] = CRGB::Red;//J
 leds[19] = CRGB::Blue;//K
 leds[20] = CRGB::Green;//L
 leds[21] = CRGB::Yellow;//M
 leds[22] = CRGB::Red;//N
 leds[23] = CRGB::Red;//O
 leds[24] = CRGB::Green;//P
 leds[25] = CRGB::Red;//Q
 leds[26] = CRGB::Black;
 leds[27] = CRGB::Black;
 leds[28] = CRGB::Black;
 leds[29] = CRGB::Black;
 leds[30] = CRGB::Blue;//H
 leds[31] = CRGB::Red;//G
 leds[32] = CRGB::Yellow;//F
 leds[33] = CRGB::Blue;//E
 leds[34] = CRGB::Green;//D
 leds[35] = CRGB::Red;//C
 leds[36] = CRGB::Blue;//B
 leds[37] = CRGB::Yellow;//A
 leds[38] = CRGB::Black;
 leds[39] = CRGB::Black;
 leds[40] = CRGB::Black;
 leds[41] = CRGB::Black;
 leds[42] = CRGB::Black;
 leds[43] = CRGB::Black;
 leds[44] = CRGB::Black;
 leds[45] = CRGB::Black;
 leds[46] = CRGB::Black;
 leds[47] = CRGB::Black;
 leds[48] = CRGB::Black;
 leds[49] = CRGB::Black;
    FastLED.show();
    delay(40);
 leds[0] = CRGB::Black;
 leds[1] = CRGB::Black;
 leds[2] = CRGB::Black;
 leds[3] = CRGB::Black;
 leds[4] = CRGB::Black;
 leds[5] = CRGB::Black;
 leds[6] = CRGB::Black;
 leds[7] = CRGB::Black;
 leds[8] = CRGB::Black;
 leds[9] = CRGB::Black;
 leds[10] = CRGB::Black;
 leds[11] = CRGB::Black;
 leds[12] = CRGB::Black;
 leds[13] = CRGB::Black;
 leds[14] = CRGB::Black;
 leds[15] = CRGB::Black;
 leds[16] = CRGB::Black;
 leds[17] = CRGB::Black;
 leds[18] = CRGB::Black;
 leds[19] = CRGB::Black;
 leds[20] = CRGB::Black;
 leds[21] = CRGB::Black;
 leds[22] = CRGB::Black;
 leds[23] = CRGB::Black;
 leds[24] = CRGB::Black;
 leds[25] = CRGB::Black;
 leds[26] = CRGB::Black;
 leds[27] = CRGB::Black;
 leds[28] = CRGB::Black;
 leds[29] = CRGB::Black;
 leds[30] = CRGB::Black;
 leds[31] = CRGB::Black;
 leds[32] = CRGB::Black;
 leds[33] = CRGB::Black;
 leds[34] = CRGB::Black;
 leds[35] = CRGB::Black;
 leds[36] = CRGB::Black;
 leds[37] = CRGB::Black;
 leds[38] = CRGB::Black;
 leds[39] = CRGB::Black;
 leds[40] = CRGB::Black;
 leds[41] = CRGB::Black;
 leds[42] = CRGB::Black;
 leds[43] = CRGB::Black;
 leds[44] = CRGB::Black;
 leds[45] = CRGB::Black;
 leds[46] = CRGB::Black;
 leds[47] = CRGB::Black;
 leds[48] = CRGB::Black;
 leds[49] = CRGB::Black;
    FastLED.show();
    delay(40); 
  }
}

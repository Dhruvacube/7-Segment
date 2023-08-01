#include <led7Segment.h>
#define DELAY 1000

led7Segment seg7;

void setup(){
    seg7.setPinA(2);
    seg7.setPinB(3);
    seg7.setPinC(4);
    seg7.setPinD(5);
    seg7.setPinE(6);
    seg7.setPinF(7);
    seg7.setPinG(8);
    seg7.setPinDP(9);
}

void loop(){
    seg7.setCustomCharacter([1,1,1,0,1,0,0,0]) // A, B, C, D, E, F, G, DP
    delay(DELAY);

    seg7.setCustomCharacter([1,1,1,0,1,0,0]) // A, B, C, D, E, F, G
    delay(DELAY);
}
#include <led7Segment.h>

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
    seg7.displayRange(0, 9, 1000); // Display 0 to 9 with 1 second delay
}
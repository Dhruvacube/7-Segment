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
    seg7.setCharacter('A'); // it should be single character within the single quotation mark
    delay(DELAY);
    
    seg7.setCharacter('A', dot = true); //display the decimal point
    delay(DELAY);

    seg7.setCharacter('A', dot = false, blink = true); //blinks the character
    delay(DELAY);

    seg7.setCharacter('A', dot = false, blink = true, blinkCount = 3); //blinks the character 3 times
    delay(DELAY);

    seg7.setCharacter('A', dot = false, blink = true, blinkCount = 3, blinkTime=DELAY); //blinks the character 3 times with customized delay, otherwise the minimum delay is 1/2 second
    delay(DELAY);
}
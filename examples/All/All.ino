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

    Serial.begin(9600);
}

void loop(){
    Serial.println("Now displaying Alphabets");
    Serial.println("it should be single character within the single quotation mark");
    seg7.setCharacter('A'); // it should be single character within the single quotation mark
    delay(DELAY);
    
    Serial.println("display the decimal point");
    seg7.setCharacter('A', dot = true); //display the decimal point
    delay(DELAY);

    Serial.println("blinks the character");
    seg7.setCharacter('A', dot = false, blink = true); //blinks the character
    delay(DELAY);

    Serial.println("blinks the character 3 times");
    seg7.setCharacter('A', dot = false, blink = true, blinkCount = 3); //blinks the character 3 times
    delay(DELAY);

    Serial.println("blinks the character 3 times with customized delay, otherwise the minimum delay is 1/2 second");
    seg7.setCharacter('A', dot = false, blink = true, blinkCount = 3, blinkTime=DELAY); //blinks the character 3 times with customized delay, otherwise the minimum delay is 1/2 second
    delay(DELAY);


    delay(DELAY+DELAY);


    Serial.println("Now displaying Numbers");
    eg7.setNumber(0);
    delay(DELAY);

    Serial.println("display the decimal point");
    seg7.setNumber(0, dot = true); //display the decimal point
    delay(DELAY);

    Seral.println("blinks the no");
    seg7.setNumber(0, dot = false, blink = true); //blinks the no
    delay(DELAY);

    Serial.println("blinks the no 3 times");
    seg7.setNumber(0, dot = false, blink = true, blinkCount = 3); //blinks the no 3 times
    delay(DELAY);

    Serial.println("blinks the no 3 times with customized delay, otherwise the minimum delay is 1/2 second");
    seg7.setNumber(0, dot = false, blink = true, blinkCount = 3, blinkTime=DELAY); //blinks the no 3 times with customized delay, otherwise the minimum delay is 1/2 second
    delay(DELAY);
    

    delay(DELAY+DELAY);


    Serial.println("Now displaying Custom Characters");
    Serial.println("A, B, C, D, E, F, G, DP");
    seg7.setCustomCharacter([1,1,1,0,1,0,0,0]) // A, B, C, D, E, F, G, DP
    delay(DELAY);

    Serial.println("A, B, C, D, E, F, G");
    seg7.setCustomCharacter([1,1,1,0,1,0,0]) // A, B, C, D, E, F, G
    delay(DELAY);
    

    delay(DELAY+DELAY);


    Serial.println("Now displaying Range");
    Serial.println("Display 0 to 9 with 1 second delay");
    seg7.displayRange(0, 9, 1000); // Display 0 to 9 with 1 second delay

        

    delay(DELAY+DELAY);


    Serial.println("End of program")
}
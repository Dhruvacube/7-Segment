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

    Serial.begin(9600);
}

void loop(){
    Serial.println("Now displaying Alphabets");
    Serial.println("it should be single character within the single quotation mark");
    seg7.setCharacter('A'); // it should be single character within the single quotation mark
    delay(DELAY);

    seg7.setCustomCharacter(seg7.nothing);
    
    Serial.println("display the decimal point");
    seg7.setCharacter('A', true); //display the decimal point
    delay(DELAY);


    delay(DELAY+DELAY);


    Serial.println("Now displaying Numbers");
    seg7.setNumber(0);
    delay(DELAY);

    seg7.setCustomCharacter(seg7.nothing);

    Serial.println("display the decimal point");
    seg7.setNumber(0, true); //display the decimal point
    delay(DELAY);
    

    delay(DELAY+DELAY);


    Serial.println("Now displaying Custom Characters");
    Serial.println("A, B, C, D, E, F, G, DP");
    bool custarr[8] = {1,1,1,0,1,0,0,0};
    seg7.setCustomCharacter(custarr); // A, B, C, D, E, F, G, DP
    delay(DELAY);

    seg7.setCustomCharacter(seg7.nothing);

    Serial.println("A, B, C, D, E, F, G");
    bool custarr1[7] = {1,1,1,0,1,0,0};
    seg7.setCustomCharacter(custarr1); // A, B, C, D, E, F, G
    delay(DELAY);
    

    delay(DELAY+DELAY);


    Serial.println("Now displaying Range");
    Serial.println("Display 0 to 9 with 1 second delay");
    seg7.displayRange(0, 9, 1000); // Display 0 to 9 with 1 second delay


    delay(DELAY+DELAY);


    Serial.println("End of program");
}
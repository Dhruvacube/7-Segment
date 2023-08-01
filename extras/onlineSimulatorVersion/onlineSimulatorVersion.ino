#ifndef led7Segment_H
#define led7Segment_H

#include <Arduino.h>

#define CATHODE 0
#define ANODE 1
#define MIN_BLINK_TIME 500


class led7Segment {
public:
  led7Segment();
  void setNumber(uint8_t number, bool dot=false, bool blink=false, uint8_t blinkTime=MIN_BLINK_TIME); //min delay is 1/2 second
  void setNumber(uint8_t number, uint8_t blinkCount, bool dot=false, bool blink=true, uint8_t blinkTime=MIN_BLINK_TIME);
  void setPin1(uint8_t pin);
  void setPin2(uint8_t pin);
  void setPin3(uint8_t pin);
  void setPin4(uint8_t pin);
  void setPin5(uint8_t pin);
  void setPin6(uint8_t pin);
  void setPin7(uint8_t pin);
  void setPinDP(uint8_t pin);
  void setPinA(uint8_t pin);
  void setPinB(uint8_t pin);
  void setPinC(uint8_t pin);
  void setPinD(uint8_t pin);
  void setPinE(uint8_t pin);
  void setPinF(uint8_t pin);
  void setPinG(uint8_t pin);
  void set7SegType(uint8_t type);
  void setCharacter(char character, bool dot=false, bool blink=false, uint8_t blinkTime=MIN_BLINK_TIME); //min delay is 1/2 second
  void setCharacter(char character, uint8_t blinkCount, bool dot=false, bool blink=true, uint8_t blinkTime=MIN_BLINK_TIME);
  void setCustomCharacter(bool customCharacter[]);
  void displayRange(uint8_t start, uint8_t end, uint8_t delayTime=MIN_BLINK_TIME); //min delay is 1/2 second

private:
  bool noData[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
  };
  bool characterData[26][7] = {
    {1, 1, 1, 0, 1, 1, 1}, // A
    {0, 0, 1, 1, 1, 1, 1}, // B
    {1, 0, 0, 1, 1, 1, 0}, // C
    {0, 1, 1, 1, 1, 0, 1}, // D
    {1, 0, 0, 1, 1, 1, 1}, // E
    {1, 0, 0, 0, 1, 1, 1}, // F
    {1, 1, 1, 1, 1, 1, 1}, // G
    {0, 1, 1, 0, 1, 1, 1}, // H
    {0, 0, 0, 0, 1, 1, 0}, // I
    {0, 1, 1, 1, 0, 0, 0}, // J
    {0, 1, 1, 0, 1, 1, 0}, // K
    {0, 0, 0, 1, 1, 1, 0}, // L
    {1, 1, 1, 0, 1, 0, 0}, // M
    {1, 1, 1, 0, 1, 0, 1}, // N
    {1, 1, 1, 1, 1, 1, 0}, // O
    {1, 1, 0, 0, 1, 1, 1}, // P
    {1, 1, 1, 1, 1, 1, 1}, // Q
    {1, 1, 0, 0, 1, 0, 1}, // R
    {1, 0, 1, 1, 0, 1, 1}, // S
    {0, 0, 0, 1, 1, 1, 1}, // T
    {0, 1, 1, 1, 1, 1, 0}, // U
    {0, 1, 1, 1, 1, 1, 0}, // V
    {0, 1, 1, 1, 1, 1, 0}, // W
    {0, 1, 1, 0, 1, 1, 1}, // X
    {0, 1, 1, 1, 0, 1, 1}, // Y
    {1, 1, 0, 1, 1, 0, 1}  // Z
  };
  uint_fast8_t _pinA, _pinB, _pinC, _pinD, _pinE, _pinF, _pinG;
  uint_fast8_t _pinDP = 0; //dot point defaults to 0
  uint_fast8_t _type = CATHODE; //defaults to cathode
  void begin(bool* array);
  bool* noDatabase(uint8_t number);
  bool* characterDatabse(char character);
  uint8_t returnCorrectOutputValue(bool value);
};

#endif //  led7Segment_H

led7Segment::led7Segment(){}; // Constructor

void led7Segment::setPin1(uint8_t pin){
  _pinA = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPin2(uint8_t pin){
  _pinB = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPin3(uint8_t pin){
  _pinC = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPin4(uint8_t pin){
  _pinD = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPin5(uint8_t pin){
  _pinE = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPin6(uint8_t pin){
  _pinF = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPin7(uint8_t pin){
  _pinG = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinDP(uint8_t pin){
  _pinDP = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinA(uint8_t pin){
  _pinA = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinB(uint8_t pin){
  _pinB = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinC(uint8_t pin){
  _pinC = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinD(uint8_t pin){
  _pinD = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinE(uint8_t pin){
  _pinE = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinF(uint8_t pin){
  _pinF = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::setPinG(uint8_t pin){
  _pinG = pin;
  pinMode(pin, OUTPUT);
};

void led7Segment::set7SegType(uint8_t type){
  _type = type;
};

bool* led7Segment::noDatabase(uint8_t number){
    return noData[number];
};

bool* led7Segment::characterDatabse(char character){
    return characterData[character - 65];
};

uint8_t led7Segment::returnCorrectOutputValue(bool value){
    if(_type == CATHODE){
        return !value;
    } else {
        return value;
    }
};

void led7Segment::begin(bool* array){
    digitalWrite(_pinA, returnCorrectOutputValue(array[0]));
    digitalWrite(_pinB, returnCorrectOutputValue(array[1]));
    digitalWrite(_pinC, returnCorrectOutputValue(array[2]));
    digitalWrite(_pinD, returnCorrectOutputValue(array[3]));
    digitalWrite(_pinE, returnCorrectOutputValue(array[4]));
    digitalWrite(_pinF, returnCorrectOutputValue(array[5]));
    digitalWrite(_pinG, returnCorrectOutputValue(array[6]));
    if (sizeof(array)/sizeof(array[0])==8){
        digitalWrite(_pinDP, returnCorrectOutputValue(array[7]));
    }
};

void led7Segment::setNumber(uint8_t number, bool dot = false, bool blink = false, uint8_t blinkTime = MIN_BLINK_TIME){
    bool* array = noDatabase(number);
    array[7] = dot;
    begin(array);
    if(blink){
        delay(blinkTime);
        begin(noDatabase(10));
        delay(blinkTime);
        begin(array);
    }
};

void led7Segment::setNumber(uint8_t number, uint8_t blinkCount, bool dot = false, bool blink = true, uint8_t blinkTime = MIN_BLINK_TIME){
    bool* array = noDatabase(number);
    array[7] = dot;
    begin(array);
    if(blink){
        for(uint8_t i = 0; i < blinkCount; i++){
            delay(blinkTime);
            begin(noDatabase(10));
            delay(blinkTime);
            begin(array);
        }
    }
};

void led7Segment::setCharacter(char character, bool dot = false, bool blink = false, uint8_t blinkTime = MIN_BLINK_TIME){
    bool* array = characterDatabse(character);
    array[7] = dot;
    begin(array);
    if(blink){
        delay(blinkTime);
        begin(noDatabase(10));
        delay(blinkTime);
        begin(array);
    }
};

void led7Segment::setCharacter(char character, uint8_t blinkCount, bool dot = false, bool blink = true, uint8_t blinkTime = MIN_BLINK_TIME){
    bool* array = characterDatabse(character);
    array[7] = dot;
    begin(array);
    if(blink){
        for(uint8_t i = 0; i < blinkCount; i++){
            delay(blinkTime);
            begin(noDatabase(10));
            delay(blinkTime);
            begin(array);
        }
    }
};

void led7Segment::setCustomCharacter(bool customCharacter[]){
    begin(customCharacter);
};

void led7Segment::displayRange(uint8_t start, uint8_t end, uint8_t delayTime=MIN_BLINK_TIME){
    for(uint8_t i = start; i <= end; i++){
        setNumber(i);
        delay(delayTime);
    }
};

void setup(){

};

void loop(){

};
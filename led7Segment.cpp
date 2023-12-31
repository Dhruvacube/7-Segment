#include "led7Segment.h"

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

void led7Segment::setType(unsigned int type){
  _type = type;
};

bool* led7Segment::noDatabase(uint8_t number){
    return noData[number];
};

bool* led7Segment::characterDatabse(char character){
    return characterData[character - 65];
};

bool led7Segment::returnCorrectOutputValue(bool value){
    if(_type == CATHODE){
        return value;
    } else {
        return !value;
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
    if (sizeof(array)/sizeof(array[0])==8 && _pinDP != 0){
        digitalWrite(_pinDP, returnCorrectOutputValue(array[7]));
    }
};

void led7Segment::setNumber(uint8_t number, bool dot = false){
    begin(nothing);
    bool* array = noDatabase(number);
    array[7] = dot;
    begin(array);
};

void led7Segment::setCharacter(char character, bool dot = false){
    begin(nothing);
    bool* array = characterDatabse(character);
    array[7] = dot;
    begin(array);
};

void led7Segment::setCustomCharacter(bool customCharacter[]){
    begin(nothing);
    begin(customCharacter);
};

void led7Segment::displayRange(uint8_t start, uint8_t end, unsigned long delayTime=MIN_BLINK_TIME){
    for(uint8_t i = start; i <= end; i++){
        setNumber(i);
        delay(delayTime);
    }
}
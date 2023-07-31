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

uint8_t* led7Segment::noDatabase(uint8_t number){
    
};

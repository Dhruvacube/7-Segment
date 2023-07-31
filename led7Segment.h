#ifndef led7Segment_H
#define led7Segment_H

#include <Arduino.h>

#define CATHODE 0
#define ANODE 1


class led7Segment {
public:
  led7Segment();
  void setNumber(uint8_t number);
  void setNumber(uint8_t number, bool dot);
  void setNumber(uint8_t number, bool dot, bool blink);
  void setNumber(uint8_t number, bool dot, bool blink, uint8_t blinkTime);
  void setNumber(uint8_t number, bool dot, bool blink, uint8_t blinkTime, uint8_t blinkCount);
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
  void setCharacter(char character);
  void setCharacter(char character, bool dot);
  void setCharacter(char character, bool dot, uint8_t blink);
  void setCharacter(char character, bool dot, uint8_t blink, uint8_t blinkTime);
  void setCharacter(char character, bool dot, uint8_t blink, uint8_t blinkTime, uint8_t blinkCount);
  void setCustomCharacter(uint8_t customCharacter[7]);
  void setCustomCharacter(uint8_t customCharacter[7], bool dot);
  void setCustomCharacter(uint8_t customCharacter[8]);
  void setCustomCharacter(uint8_t customCharacter[8], bool dot);
  void displayRange(uint8_t start, uint8_t end, uint8_t delayTime);

private:
  uint8_t _pinA, _pinB, _pinC, _pinD, _pinE, _pinF, _pinG, _pinDP, _type;
  void begin(uint8_t* array);
  uint8_t* noDatabase(uint8_t number);
  uint8_t* characterDatabse(char character);
};

#endif //  led7Segment_H
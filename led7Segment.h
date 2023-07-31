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
  void set7SegType(uint8_t type);
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
  uint_fast8_t _pinA, _pinB, _pinC, _pinD, _pinE, _pinF, _pinG, _pinDP, _type;
  void begin(bool* array);
  bool* noDatabase(uint8_t number);
  bool* characterDatabse(char character);
  uint8_t returnCorrectOutputValue(bool value);
};

#endif //  led7Segment_H
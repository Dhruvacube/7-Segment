#ifndef led7Segment_H
#define led7Segment_H

#include <Arduino.h>

#define CATHODE 0
#define ANODE 1
#define MIN_BLINK_TIME 500


class led7Segment {
public:
  led7Segment();
  void setNumber(uint8_t number, bool dot=false);
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
  void setType(unsigned int type);
  void setCharacter(char character, bool dot=false);
  void setCustomCharacter(bool customCharacter[]);
  void displayRange(uint8_t start, uint8_t end, unsigned long delayTime=MIN_BLINK_TIME); //min delay is 1/2 second

  bool nothing[8] = {0, 0, 0, 0, 0, 0, 0, 0};

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
  unsigned int _type = CATHODE; //defaults to cathode
  void begin(bool* array);
  bool* noDatabase(uint8_t number);
  bool* characterDatabse(char character);
  bool returnCorrectOutputValue(bool value);
};

#endif //  led7Segment_H
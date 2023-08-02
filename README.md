
# 7 Segment Display Library

A brief description of what this project does and who it's for


![GitHub all releases](https://img.shields.io/github/downloads/Dhruvacube/7-Segment/total)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)



## API Reference

- #### Set Pin A
  ```cpp
  void setPin1(uint8_t pin);
  void setPinA(uint8_t pin);
  ```
- #### Set Pin B
  ```cpp
  void setPin2(uint8_t pin);
  void setPinB(uint8_t pin);
  ```
- #### Set Pin C
  ```cpp
  void setPin3(uint8_t pin);
  void setPinC(uint8_t pin);
  ```
- #### Set Pin D
  ```cpp
  void setPin4(uint8_t pin);
  void setPinD(uint8_t pin);
  ```
- #### Set Pin E
  ```cpp
  void setPin5(uint8_t pin);
  void setPinE(uint8_t pin);
  ```
- #### Set Pin F
  ```cpp
  void setPin6(uint8_t pin);
  void setPinF(uint8_t pin);
  ```
- #### Set Pin G
  ```cpp
  void setPin7(uint8_t pin);
  void setPinG(uint8_t pin);
  ```
- #### Set Pin DP (Decimal Point Pin)
  ```cpp
  void setPinDP(uint8_t pin);
  ```

- #### Displaying no to the display
  ```cpp
  void setNumber(uint8_t number, bool dot=false);
  ```
  
- #### Displaying alphabet to the display
  ```cpp
  void setCharacter(char character, bool dot=false);
  ```
  
- #### Displaying custom character to the display
  ```cpp
  void setCustomCharacter(bool customCharacter[]);
  ```


## Feedback

If you have any feedback, please reach out to us at me@dhruvashaw.in


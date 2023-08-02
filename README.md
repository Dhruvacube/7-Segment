
# 7 Segment Display Library

A powerful but easy to use versatile 7 Segment Library for the arduino environment.

![GitHub all releases](https://img.shields.io/github/downloads/Dhruvacube/7-Segment/total)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)


## Downloading the library
One can easily install using `arduino library manager` or one install using the `zip file` installtion method


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
- #### Set the type of the display used (CATHODE | ANODE)
  ```cpp
  void setType(unsigned int type); //values accepted are CATHODE or ANODE
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
  void setCustomCharacter(bool customCharacter[]); // The customCharacter array length could be either 7 or 8 elemnts long
  ```

- #### Displaying a range of numbers after a delay
  ```cpp
  void displayRange(uint8_t start, uint8_t end, unsigned long delayTime=MIN_BLINK_TIME); //min delay is 1/2 second
  ```

### Precompilers and other publically available variables
```cpp
#define CATHODE 0
#define ANODE 1
#define MIN_BLINK_TIME 500

class led7Segment {
public:
  bool nothing[8] = {0, 0, 0, 0, 0, 0, 0, 0}; // could be used to turn of or display nothing on the 7 segment display
};
```

## Testing
The code and its usage has been tested using `Proteus simulation software`

## Usage

For the usage examples check out the [examples](https://github.com/Dhruvacube/7-Segment/tree/main/examples) folder

## Feedback

If you have any feedback, please reach out to us at me@dhruvashaw.in


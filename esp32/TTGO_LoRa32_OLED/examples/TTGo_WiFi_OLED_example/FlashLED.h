// FlashLED.h
// RMB 10-16-2017
// Not a good idea to put functions and variables in include file!

// include guards are very important!
#ifndef FLASHLED_H
#define FLASHLED_H

#include <string>
using namespace std;

#include "Arduino.h"

// LED_BUILTIN pin 2 TTGo LoRa32 board
#define ON 1
#define OFF 0
#define TICKS_SEC 2000  // number of 0.5ms ticks per second

class FlashLED {
public:
  string boardType;
  hw_timer_t *timer;

  FlashLED(string bdtype);                  // constructor
  
  void begin();
};

#endif  // include guard

// FlashLED.cpp
// Flash LED once per second, interrupt driven!
// RMB 10-16-2017

#include "FlashLED.h"

volatile int state = OFF;   // had to make this global

/* could not get this to work as a class member function
*  even with std::function and std::bind approaches!
*  so much for encapsulation and inheritance!
*/

void IRAM_ATTR onTimerISR() {
  // keep interrupt function short and sweet! 
  state = !state;                      // toggle state of LED
  digitalWrite(LED_BUILTIN, state);   // now change LED
}

// constructor
FlashLED::FlashLED(string bdtype) {
  boardType = bdtype;
  timer = NULL;
}

void FlashLED::begin() {
  pinMode(LED_BUILTIN, OUTPUT);   // set pin as output for LED flashing 
  // 64bit timer, 16bit pre-scaler, APB clock is 80 MHz
  // use timer 2 (0-3) with 0.5 ms tick, countup
  timer = timerBegin(1, 40000, true);
  timerAttachInterrupt(timer, &onTimerISR, true);
  // set alarm to call onTimer function every second and autoreload
  timerAlarmWrite(timer, TICKS_SEC, true);
  timerAlarmEnable(timer);                // Start the alarm
  Serial.println("LED flasher started!");
}

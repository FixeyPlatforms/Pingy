#ifndef Pingy_h
#define Pingy_h

#include <Arduino.h>

class Pingy {
  public:
    Pingy(int trigPin, int echoPin);
    float read();    // Returns distance in CM
    float readCM();  // Explicitly returns CM
    float readIN();  // Returns Inches
    
  private:
    void _initIfNeeded(); // Helper to auto-setup
    int _trig;
    int _echo;
    bool _initialized;
};

#endif

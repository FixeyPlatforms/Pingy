#include "Pingy.h"
#include <Arduino.h>

Pingy::Pingy(int trigPin, int echoPin) {
  _trig = trigPin;
  _echo = echoPin;
  _initialized = false;
}

void Pingy::_initIfNeeded() {
  if (!_initialized) {
    pinMode(_trig, OUTPUT);
    pinMode(_echo, INPUT);
    _initialized = true;
  }
}

float Pingy::read() {
  return readCM();
}

float Pingy::readCM() {
  _initIfNeeded(); // Auto-setup pins if not done yet

  digitalWrite(_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trig, LOW);

  // Timeout set to 30000 microseconds (~5 meters max) to prevent long blocking
  long duration = pulseIn(_echo, HIGH, 30000);

  if (duration == 0) return 0; 
  
  return duration * 0.034 / 2;
}

float Pingy::readIN() {
  float cm = readCM(); // readCM calls _initIfNeeded so we are good
  if (cm == 0) return 0;
  return cm / 2.54;
}

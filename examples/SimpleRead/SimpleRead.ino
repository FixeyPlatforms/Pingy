/*
  SimpleRead.ino - Example for Pingy Library
  Created by Fixey Software Solutions PVT LTD.
  
  This example shows how to read distance in Centimeters and Inches.
*/

#include <Pingy.h>

// Initialize sensor on Trigger Pin 9, Echo Pin 10
Pingy mySensor(9, 10);

void setup() {
  Serial.begin(9600);
  Serial.println("Pingy Library - Simple Test");
}

void loop() {
  // Read distance in Centimeters (Default)
  float distCM = mySensor.read();
  
  /* You can also specify units explicitly:
     float distCM = mySensor.readCM();
     float distIN = mySensor.readIN(); 
  */

  Serial.print("Distance: ");
  Serial.print(distCM);
  Serial.println(" cm");

  delay(200);
}

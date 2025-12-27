# Pingy Library

**The Easiest and Most Powerful Ultrasonic Sensor Library for Arduino**

Pingy is a robust, object-oriented library designed for Arduino, ESP32, and ESP8266. It simplifies ultrasonic sensor (HC-SR04) usage by handling all complexity internally, offering features like **auto-initialization**, **multi-sensor support**, and **instant unit conversion**.

## Key Features

*   **Auto-Initialization**: No need for `pinMode` or setup logic. It just works.
*   **Unit Conversion**: Get distance in **Centimeters (CM)** or **Inches (IN)** instantly.
*   **Multi-Sensor Support**: Easily control multiple sensors (Front, Back, Left, Right) simultaneously.
*   **Non-Blocking Logic**: Optimized for fast performance in robotics and industrial applications.

## Installation

1.  Open the **Arduino IDE**.
2.  Go to **Tools** > **Manage Libraries...**
3.  Search for **"Pingy"**.
4.  Click **Install**.

## Quick Usage

```cpp
#include <Pingy.h>

// Initialize Sensor (Trigger Pin = 9, Echo Pin = 10)
Pingy sensor(9, 10);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Get distance in Centimeters
  float dist = sensor.read(); 
  
  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" cm");
  
  delay(100);
}
```

## API Reference

*   `Pingy(trig, echo)`: Constructor to define pins.
*   `read()`: Returns distance in **CM** (default).
*   `readCM()`: Returns distance in **CM**.
*   `readIN()`: Returns distance in **Inches**.

---

<br>

### Grown in the Labs of

<div align="center">
  <img src="https://i.postimg.cc/bv0m0NTv/Untitled-design-8-removebg-preview.png" alt="Fixey Platforms Logo" width="150"/>
  <h2>Fixey Platforms</h2>
  <p><strong>World's Best Social Tech, AI & Robotics Software Company</strong></p>
  
  <p>
    Pingy is an Open Source initiative by <strong>Fixey Platforms</strong>.<br>
    We build the future with <strong>Metra</strong>, <strong>AlgoChat</strong>, and <strong>FixeyEDU</strong>.
  </p>

  <p><strong>Leadership Team</strong><br>
  Nadun Malinga (CEO) • Chenura Oshada (CTO) • Kaveesha Waragoda (COO) • Thisagi Dahamsa (CMO)</p>
  
  <p>© Fixey Platforms. All Rights Reserved.</p>
</div>

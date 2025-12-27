# Pingy Library

**The Easiest and Most Powerful Ultrasonic Sensor Library for Arduino**

Developed and Maintained by **Fixey Software Solutions PVT LTD**.

Pingy provides a robust, object-oriented interface for interacting with ultrasonic sensors (such as the HC-SR04). Designed for stability and ease of use across Arduino, ESP32, and ESP8266 platforms, it abstracts away complex timing logic to offer a seamless development experience.

## Key Features

*   **Auto-Initialization**: Eliminates the need for manual pin configuration logic in the setup phase. The library handles hardware initialization automatically upon usage.
*   **Unit Conversion**: Built-in methods to retrieve precise measurements in both Centimeters (CM) and Inches (IN) without additional calculation overhead.
*   **Multi-Instance Support**: Fully capable of managing multiple sensors simultaneously, making it ideal for complex robotics and industrial monitoring applications.
*   **Optimized Performance**: Lightweight architecture designed to minimize blocking time and maximize processor efficiency.

## Installation

1.  Open the **Arduino IDE**.
2.  Navigate to **Tools** > **Manage Libraries...**
3.  Search for **"Pingy"**.
4.  Click **Install**.

## Usage

The library is designed for minimal boilerplate code. Below is a standard implementation example.

```cpp
#include <Pingy.h>

// Initialize sensor object with Trigger Pin and Echo Pin
Pingy mySensor(9, 10);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Retrieve distance in Centimeters
  float distanceCM = mySensor.read();

  Serial.print("Distance: ");
  Serial.print(distanceCM);
  Serial.println(" cm");

  delay(100);
}
```

## API Reference

*   `Pingy(int trigPin, int echoPin)`: Constructor to define sensor pins.
*   `float read()`: Returns the calculated distance in Centimeters.
*   `float readCM()`: Explicitly returns the distance in Centimeters.
*   `float readIN()`: Returns the distance in Inches.

## About the Author

**Fixey Software Solutions PVT LTD** is a premier technology provider operating under the **Fixey Platforms** ecosystem. We are dedicated to engineering high-quality, reliable software solutions and educational tools (FixeyEDU) to empower developers worldwide.

**License**: MIT License
Copyright (c) 2024 Fixey Software Solutions PVT LTD. All rights reserved.

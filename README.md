# Pingy

![License](https://img.shields.io/badge/license-MIT-blue.svg) ![Version](https://img.shields.io/badge/version-1.0.0-green.svg)

**The easiest and most powerful object-oriented Ultrasonic Sensor library for Arduino.**

Pingy simplifies usage of ultrasonic sensors (HC-SR04) with auto-initialization, multi-sensor support, and instant unit conversion.

## Features

- **Auto-Initialization:** No setup code required.
- **Unit Conversion:** Get readings in **CM** or **Inches** instantly.
- **Multi-Sensor Support:** Easily handle multiple sensors.
- **Lightweight:** Optimized for Arduino, ESP32, and ESP8266.

## Installation

1.  Open **Arduino IDE**.
2.  Go to **Tools** > **Manage Libraries...**
3.  Search for **"Pingy"**.
4.  Click **Install**.

## Usage

```cpp
#include <Pingy.h>

// Initialize Sensor (Trigger Pin, Echo Pin)
Pingy sensor(9, 10);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance: ");
  Serial.print(sensor.read()); // Default: CM
  Serial.println(" cm");
  delay(100);
}
```

## API Reference

- `Pingy(trig, echo)`: Constructor.
- `read()`: Returns distance in cm.
- `readIN()`: Returns distance in inches.

---

### License

This project is open-sourced software licensed under the **[MIT license](https://opensource.org/licenses/MIT)**.

Developed by **Team Fixey** at **[Fixey Platforms](https://fixeyplatforms.com)**.

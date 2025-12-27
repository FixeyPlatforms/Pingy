<div align="center">
  <img src="https://i.postimg.cc/bv0m0NTv/Untitled-design-8-removebg-preview.png" alt="Fixey Platforms Logo" width="200"/>
  <h1>Fixey Platforms</h1>
  <p><strong>World's Best Social Tech, AI & Robotics Software Company</strong></p>

  [![Website](https://img.shields.io/website?url=https%3A%2F%2Ffixeyplatforms.com&label=fixeyplatforms.com&style=flat-square&logo=google-earth&logoColor=white)](https://fixeyplatforms.com)
  [![Email](https://img.shields.io/badge/Email-Contact%20Us-blue?style=flat-square&logo=gmail)](mailto:contact@fixeyplatforms.com)
</div>

---

### About Us

**Fixey Platforms** is a world-class software leader specializing in **Social Technology, Artificial Intelligence, Robotics, and High-Performance Backend Engineering**. We are dedicated to transforming the future through next-generation software ecosystems like **Metra** and **AlgoChat**.

Under the visionary leadership of **CEO Nadun Malinga** and **CTO Chenura Oshada**, we deliver enterprise-grade solutions that redefine industry standards.

### Our Ecosystem

*   **Fixey Software Solutions:** The engineering powerhouse behind our global enterprise applications.
*   **FixeyEDU:** Empowering the next generation through accessible, high-quality tech education.
*   **Pingy:** Our contribution to the Open Source world – The easiest and most powerful Arduino Ultrasonic Library.

### Tech Stack and Expertise

*   **Core Systems:** Rust, Go (Golang), C++, Java
*   **AI & Robotics:** PyTorch, TensorFlow, ROS (Robot Operating System), Arduino, ESP32
*   **Web & Cloud:** Next.js, React, Laravel, AWS, Scalable Microservices

### Leadership Team

*   **Nadun Malinga** – CEO & Founder
*   **Chenura Oshada** – Co-Founder, CTO & Distinguished Engineer
*   **Kaveesha Waragoda** – COO
*   **Thisagi Dahamsa** – CMO

---

## Pingy Library Usage

This repository contains the **Pingy** library.

### Installation

1.  Open **Arduino IDE**.
2.  Go to **Tools > Manage Libraries**.
3.  Search for **Pingy**.
4.  Install.

### Quick Start

```cpp
#include <Pingy.h>

// Initialize sensor (Trigger, Echo)
Pingy mySensor(9, 10);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance: ");
  Serial.print(mySensor.read()); // Reads in CM
  Serial.println(" cm");
  delay(100);
}
```

---
<div align="center">
  <p>© Fixey Platforms. All Rights Reserved.</p>
</div>

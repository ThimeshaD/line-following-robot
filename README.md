# Line Following Robot

An autonomous robot built using IR sensors and Arduino to follow a predefined black line path. This project demonstrates the basics of embedded systems, sensors, and robotics.

## Features
- Detects and follows a black line using IR sensors
- Uses Arduino Uno as the main controller
- Motor control with L298N motor driver
- Compact and low-cost design

## Tools & Components
- Arduino Uno
- IR Sensors
- L298N Motor Driver
- DC Motors with Wheels
- Chassis
- Arduino IDE

## How It Works
1. IR sensors detect the presence of a black line on a white surface.
2. The Arduino processes sensor inputs.
3. Based on sensor values, the motor driver adjusts the direction of the motors to keep the robot on the line.

## Circuit Diagram
(Add an image here, e.g., `circuit.png`)

## How to Run
1. Connect the circuit as per the diagram.
2. Open `line_following.ino` in Arduino IDE.
3. Upload the code to the Arduino Uno.
4. Place the robot on the track and power it.

---

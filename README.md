# LCD-Screen-Controller

The aim of this device is to help people with hearing or vision impairments know when they have poured the equivalent of half a cup of liquid.

## Table of Contents

  1) Design Overview
  2) Demo Video
  3) Next Steps

## Design Overview
This project implements a classic Snake game on an LCD screen using an Arduino microcontroller. The setup includes a 16x2 LCD screen for game display and four tactile push buttons for user input.

Components:

Arduino Uno: The microcontroller that drives the game logic and handles user input.
16x2 LCD Screen: Displays the game grid, snake, and food items.
Four Push Buttons: Used for controlling the direction of the snake (up, down, left, right).
Breadboard and Connecting Wires: For circuit assembly and connections between components.
Functionality:

Game Logic: The snake moves continuously on the LCD screen, with its direction controlled by the four buttons. The game updates the screen in real-time based on the snake's movements and interactions with food items and boundaries.
Button Input: Each button is mapped to a specific directional control. The state of each button is read by the Arduino, which updates the snake’s direction accordingly.
Collision Detection: The game includes logic to detect collisions with the screen boundaries and the snake’s own body, ending the game when a collision is detected.
Score Tracking: The LCD screen displays the current score, which increments each time the snake consumes food.
This project demonstrates fundamental concepts in embedded systems, including real-time control, user input handling, and graphical display management, providing a hands-on learning experience in both electronics and programming.

## Demo Video


## Next Steps


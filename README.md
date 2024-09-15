# LCD-Screen-Controller

This project displays a two-pixel "snake" game on an LCD screen using an Arduino microcontroller. The user can then move the snake around the screen by pushing four dirctional buttons.

## Table of Contents

  1) Design Overview
  2) Demo Video
  3) Next Steps

## Design Overview
This project uses an Arduino Uno R3 as an interface between external input (push buttons) and generates a response on another device (LCD screen). The push buttons are wired in an active high setup. This means that the ardunio will continuously recieve no signal from the buttons until they are pressed. Each button is wired to a different input pin and each pin has been mapped to a specific direction (left, up down or right). This means based on the button that is pressed, the snake will be moved in that direction on the LCD screen.
Intitially, the snake will be stagnant on the screen until a button is pressed. Once this happens, it will move continuously until the program is terminated. The screen is updated in real-time by being cleared and then redrawn based on the last button input.
Button Input: Each button is mapped to a specific directional control. The state of each button is read by the Arduino, which updates the snake’s direction accordingly.

## Demo Video


## Next Steps


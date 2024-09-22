# LCD-Screen-Controller

This project displays a two-pixel character on an LCD screen using an Arduino microcontroller. The user can then move the double dot around the screen by pushing four directional buttons.

## Table of Contents

  1) Design Overview
  2) Demo Video
  3) Next Steps

## Design Overview
This project uses an Arduino Uno R3 as an interface between external input (push buttons) and generates a response on another device (LCD screen). The push buttons are wired in an active high setup. This means that the Ardunio will continuously receive no signal from the buttons until they are pressed. Each button is wired to a different input pin and each pin has been mapped to a specific direction (left, up, down or right). This means based on the button that is pressed, the double dot will be moved in that direction on the LCD screen.
Intitially, the double dot will be stagnant on the screen until a button is pressed. Once this happens, it will move continuously until the program is terminated. The screen is updated in real-time by being cleared and then redrawn based on the last button input.

## Demo Video
https://github.com/user-attachments/assets/699409bf-8cf2-41b8-8756-b6beb0314321

## Next Steps
One way to improve this project would be to recreate the snake game on the LCD screen by adding an edible fruit and collision to kill the snake. This is a very plausible task to code however the 16x2 screen is very cramped and would make the game too difficult for players. Another improvment would be to add more buttons that perform different tasks such as speeding up and slowing down the double dot or being able to control two characters at the same time.

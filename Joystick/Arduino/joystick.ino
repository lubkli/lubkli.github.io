/* Atari Joystick 2 USB
 * Auth: Lubomir Klimes
 * 
 * 21-03-01 version 1.0
 * 
 * Hardware
 * ATmega32u4 based Arduino (Arduino Leonardo/Micro)
 *  
 * Software
 * Arduino IDE 1.8.13
 * Arduino Joystick Library 2.0.7 - https://github.com/MHeironimus/ArduinoJoystickLibrary
 *  
 * Works with..  
 * OS: Linux/MacOS/Windows
 *  
 * Pinout Reference (C64) - http://old.pinouts.ru/Inputs/ControlPortC64_pinout.shtml
 * 
 * DE9 female plug on end view:
 * 5 4 3 2 1 
 *  9 8 7 6
 * pin 1: JOY_UP
 * pin 2: JOY_DOWN
 * pin 3: JOY_LEFT
 * pin 4: JOY_RIGHT
 * pin 5: No Connection
 * pin 6: JOY_BUTTON
 * pin 7: No Connection
 * pin 8: Ground
 * pin 9: No Connection
 *   
 */

#define DEBUG 0

#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  1, 0,                  // Button Count, Hat Switch Count
  true, true, false,     // X and Y, but no Z Axis
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering

// Arduino Controller input Pins
const int JOY_UP = 2;
const int JOY_DOWN = 3;
const int JOY_LEFT = 4;
const int JOY_RIGHT = 5;
const int JOY_BUTTON = 6;

// Last state of the buttons
int lastButtonState[5] = {0,0,0,0,0};
 
void setup() 
{
  #ifdef DEBUG
  Serial.begin(9600);
  #endif

  pinMode(JOY_UP, INPUT_PULLUP);  
  pinMode(JOY_DOWN, INPUT_PULLUP);  
  pinMode(JOY_LEFT, INPUT_PULLUP);  
  pinMode(JOY_RIGHT, INPUT_PULLUP);  
  pinMode(JOY_BUTTON, INPUT_PULLUP);  

  // Initialize Joystick Library
  Joystick.begin(); //false
  Joystick.setXAxisRange(-1, 1);
  Joystick.setYAxisRange(-1, 1);
}

void loop() 
{
  // Read pin values
  for (int index = 0; index < 5; index++)
  {
    int currentButtonState = !digitalRead(index + 2);
    if (currentButtonState != lastButtonState[index])
    {
      #ifdef DEBUG
      Serial.print("index");
      Serial.print(index);
      Serial.print("value");
      Serial.println(currentButtonState);
      #endif
      
      switch (index) {
        case 0: // UP
          if (currentButtonState == 1) {
            Joystick.setYAxis(-1);
          } else {
            Joystick.setYAxis(0);
          }
          break;
        case 1: // DOWN
          if (currentButtonState == 1) {
            Joystick.setYAxis(1);
          } else {
            Joystick.setYAxis(0);
          }
          break;
        case 2: // LEFT
          if (currentButtonState == 1) {
            Joystick.setXAxis(-1);
          } else {
            Joystick.setXAxis(0);
          }
          break;
        case 3: // RIGHT
          if (currentButtonState == 1) {
            Joystick.setXAxis(1);
          } else {
            Joystick.setXAxis(0);
          }
          break;
        case 4: // FIRE
          Joystick.setButton(0, currentButtonState);
          break;
      }
      lastButtonState[index] = currentButtonState;
    }
  }

  delay(10);
}

/*
void loop() 
{
  // button
  !digitalRead(JOY_BUTTON) ? Joystick.pressButton(0) : Joystick.releaseButton(0);

  // digital xy axis 
  Joystick.setXAxis(0);
  Joystick.setYAxis(0);
  if (!digitalRead(JOY_UP)) Joystick.setYAxis(-127);
  if (!digitalRead(JOY_DOWN)) Joystick.setYAxis(127);
  if (!digitalRead(JOY_LEFT)) Joystick.setXAxis(-127);
  if (!digitalRead(JOY_RIGHT)) Joystick.setXAxis(127);

  Joystick.sendState();
  
  delay(50);
}
*/

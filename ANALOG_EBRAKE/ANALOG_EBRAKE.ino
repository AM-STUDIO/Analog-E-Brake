// Analog eBrake-Handbrake
// PIN A0 to 10k pot output - Throttle Axis
// Use with Arduino ProMicro.
// Tested and working in DiRT RALLY + ASSETTO CORSA
// by AMSTUDIO
// 20.1.2017

#include <Joystick.h>

void setup()

{pinMode(A0, INPUT); 
   Joystick.begin();}

const int pinToButtonMap = A0;

void loop()

{int pot = analogRead(A0);
int mapped = map(pot,0,1023,0,255);
{Joystick.setThrottle(mapped);}}

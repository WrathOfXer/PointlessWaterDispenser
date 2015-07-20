#include <Servo.h>
 
Servo bottleServo;  // creates Servo Object
 
int potentiometerPinNumber = 0;  // analog pin in which potentiometer is connected to
int analogPinValue;              // stores value of potentiometer
 
void setup()
{
  bottleServo.attach(9);         // attaches the servo on pin 9 to the servo object
}
 
void loop()
{
  val = analogRead(potentiometerPinNumber);// reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 179);         // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                      // sets the servo position according to the scaled value
  delay(10);                               // time for servo to reach destination
}

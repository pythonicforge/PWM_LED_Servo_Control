#include <Servo.h>

Servo myServo;

const int ledPin = 10;
int potPin = A0;
int pwnValue = 0;
int servoValue = 0;
int potValue = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  myServo.attach(9);
}

void loop()
{
  potValue = analogRead(potPin);
  pwnValue = map(potValue, 0, 1023, 0, 255);
  servoValue = map(potValue, 0, 1023, 0, 180);
  analogWrite(ledPin, pwnValue);
  myServo.write(servoValue);
  delay(10);
}
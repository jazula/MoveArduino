#include <Servo.h>
#include "Move.h"
Move test;
 

void setup()
{
  test.connectServos(13, 12);
}

void loop()
{
  test.forward();
  delay(1500);
  test.backwards();
  delay(1500);
}  

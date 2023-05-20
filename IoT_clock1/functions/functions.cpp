#include <Arduino.h>
#include "functions.h"

void fun1(int c) 
{
    Serial.println(c);
}

int fun2(float f) 
{
  int d = (int) f ;
  return d ;
}
#include "VARIABLES.h"
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
}
void loop()
{  
  get_inputs();
  parsing();
  check_inputs();
}


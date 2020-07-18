//HOMING FUNCTION

int homepos(int Basepos,int Joint1pos,int Joint2pos1,int Joint2pos2)
{
  
  /* FINAL POSSITIONS
  Basepos=90;
  Joint1Pos=0;
  Joint2pos1=90;
  Joint2pos2=180;
  */

  //BASE POSITION
  if(Basepos <90)
  {
    for (int i=Basepos;i <=90; i++)
    {
      BaseServo1.write(map(i-4,0,180,5,175));
      BaseServo2.write(map(i,0,180,175,5));
      delay(30);
      Serial.print("BASE POS ");
      Serial.println(i);
    }
  }
  if(Basepos >90)
  {
    for (int i=Basepos;i >=90; i--)
    {
      BaseServo1.write(map(i-4,0,180,5,175));
      BaseServo2.write(map(i,0,180,175,5));
      delay(30);
      Serial.print("BASE POS ");
      Serial.println(i);
    }
  }
  Basepos=90;

  // JOINT 1 POSSITION
  if(Joint1pos >0)
  {
    for (int i=Joint1pos; i >=0; i--)
    {
      Joint1Servo1.write(map(i-3,0,180,5,175));
      Joint1Servo2.write(map(i,0,180,175,5));
      delay(30);
      Serial.print("JOINT1 POS ");
      Serial.println(i);
    }
  }
  Joint1pos=0;
  
  // JOINT 2 POSSITION 1
  if(Joint2pos1 <90)
  {
    for (int i=Joint2pos1;i <=90; i++)
    {
      Joint2Servo1.write(map(i,0,180,5,175));
      delay(30);
      Serial.print("Joint2 POS1 ");
      Serial.println(i);
    }
  }
  if(Joint2pos1 >90)
  {
    for (int i=Joint2pos1;i >=90; i--)
    {
      Joint2Servo1.write(map(i,0,180,5,175));
      delay(30);
      Serial.print("Joint2 POS1 ");
      Serial.println(i);
    }
  }
  Joint2pos1=90;
 
  
  // JOINT 2 POSSITION 2
  if(Joint2pos2 < 180)
  {
    for (int i=Joint2pos2;i <=180; i++)
    {
      Joint2Servo2.write(map(i,0,180,5,175));
      delay(30);
      Serial.print("Joint2 POS2 ");
      Serial.println(i);
    }
  }
  Joint2pos2=180;
}

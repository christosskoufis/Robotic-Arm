int readingmode(int Basepos,int Joint1pos,int Joint2pos1,int Joint2pos2,boolean key4pressed,boolean key5pressed)
{
  /*
  readinputs();
  Joint controlled=1
  while change joint button not pressed save latest move and move joint 1 servos accoridngly if change joint button pressed then save values and joint control =2
  while joint control =2 ..... if change joint button pressed then save values and joint control =3
  BUTTON ARRAY 
  1  2  3
  1) change joint button
  2) up
  3) down
  */
  /*
   * KEY 4 Changes Joint
   * KEY 5 Cancels Rading Mode
   */
  while (key4pressed==false)
  {
     readinputs();
     normalmode();
  }
}


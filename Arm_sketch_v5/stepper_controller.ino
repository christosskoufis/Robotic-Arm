int stepper_rotate(int move_dir, int angle, bool StopSwitchState)
{ 
  if(StopSwitchState == false) // IF ENDSTOP WAS NOT HIT 2 TIMES
    {  // MOVING DIRECTION
       if(move_dir=1) //LEFT
        {
           digitalWrite(8,LOW);
           stepper.rotate(angle);
        }
       if(move_dir=0) //RIGHT
       {
           digitalWrite(8,HIGH);
           stepper.rotate(angle);
       }
    }
    else if (StopSwitchState == true)
    {
      //PRINT FAILED DUE TO THE STEPPER MAKING 2 FULL ROTATIONS
      StopSwitchState=false;
    }
  
}

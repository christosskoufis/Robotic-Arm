int drive_stepper(int microstepping,int StepperAngle)
{
  //NOT TESTED
  stepper.setMicrostep(microstepping);
  if(StepperAngle!=CurrentAngle)
  {
    if(CurrentAngle > StepperAngle && (StepperAngle>=0))
    {
      //MOVE CCW
      stepper.move(microstepping * (StepperAngle-CurrentAngle));
      CurrentAngle=StepperAngle;
    }
    else if(CurrentAngle < StepperAngle && (StepperAngle<=360))
    {
      //Move CW
      stepper.move(-microstepping * (StepperAngle-CurrentAngle));
      CurrentAngle=StepperAngle;
    }
  }
}


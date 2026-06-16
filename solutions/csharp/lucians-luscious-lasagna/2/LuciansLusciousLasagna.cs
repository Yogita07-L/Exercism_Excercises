class Lasagna
{

      public int ExpectedMinutesInOven()=> 40;

    public  int RemainingMinutesInOven(int mins)
    { 
        return (int)ExpectedMinutesInOven() - mins;
    
    }
      public  int PreparationTimeInMinutes(int layer)
      {
          return layer*2;
      }

      public  int ElapsedTimeInMinutes(int layer1, int mins)
      {
          return layer1*2 + mins;
      }
}

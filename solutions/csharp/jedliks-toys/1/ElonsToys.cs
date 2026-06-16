using System;

class RemoteControlCar
{
    private int battery;
    private int distance ;
        public RemoteControlCar()
        {
            distance = 0;
            battery = 100; // Full battery charge
        }

        public static RemoteControlCar Buy()
        {
            return new RemoteControlCar();
        }

        public void Drive()
        {
            if (battery > 0)
            {
                distance +=20;
                battery --;
                DistanceDisplay();
                BatteryDisplay();
            }
            else
                BatteryDisplay();
                

        }
        public string BatteryDisplay()
        {
            if (battery > 0)
                return ("Battery at " + battery + "%");
            else if (battery == 0) ;
            return "Battery empty";
        }
        public string DistanceDisplay()
        {
            return "Driven " + distance + " meters";
        }

}

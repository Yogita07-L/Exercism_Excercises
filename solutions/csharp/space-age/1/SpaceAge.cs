using System;

public class SpaceAge
{
        private int seconds;
        public SpaceAge(int sec) => this.seconds = sec;
        public double OnEarth() => (double)seconds / 31557600;

        public double OnMercury() => (double)seconds / (0.2408467 * 31557600) / 1.0;

        public double OnVenus() => (double)seconds / (0.61519726 * 31557600) / 1.0;
        public double OnMars() => (double)seconds / (1.8808158 * 31557600) / 1.0;
        public double OnJupiter() => (double)seconds / (11.862615 * 31557600) / 1.0;
        public double OnSaturn() => (double)seconds / (29.447498 * 31557600) / 1.0;
        public double OnUranus() => (double)seconds / (84.016846 * 31557600) / 1.0;
        public double OnNeptune() => (double)seconds / (164.79132 * 31557600) / 1.0;
}
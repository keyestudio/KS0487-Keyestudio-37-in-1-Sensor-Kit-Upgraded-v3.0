#include "TM1637.h"
#define CLK 6//pins definitions for TM1637 and can be changed to other ports
#define DIO 5
TM1637 tm1637(CLK, DIO);
void setup()
{
  tm1637.init();
  tm1637.set(BRIGHT_TYPICAL);
}
void loop()
{
  tm1637.point(POINT_ON);
  for (int a = 0; a < 6; a++)
  {
    tm1637.display(0, a);
    for (int b = 0;
         b < 10; b++)
    {
      tm1637.display(1, b);
      for (int c = 0; c < 6; c++)
      {
        tm1637.display(2, c);
        for (int d = 0; d < 10; d++)
        {
          tm1637.display(3, d);
          delay(1000);
        }
      }
    }
  }
}

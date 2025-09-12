#include "header_class.h"
#include <iostream>

using namespace std;

Time::Time() // Function time of time class
{
  hour = 0;
  minute = 0;
  second = 0;
} // constructor - initialize data with default values or the values

Time::Time(int hh, int mm, int ss)
{
  // hour = hh;
  // minute = mm;
  // second = ss;
  setTime(hh, mm, ss);
}

void Time::setTime(int hh, int mm, int ss)
{
  if (hh >= 0 && hh <= 23)
    hour = hh;
  else
    hour = 0;

  if (mm >= 0 && mm <= 59)
    minute = mm;
  else
    minute = 0;

  if (ss >= 0 && ss <= 59)
    second = ss;
  else
    second = 0;
}

void Time::printTime()
{
  cout << "{" << hour << ":" << minute << ":" << second << "}";
}

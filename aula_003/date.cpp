#include "date.h"
#include <iostream>

using namespace std;

// Construtor
Date::Date(int dd, int mm, int yy)
{
  d = dd;
  m = mm;
  y = yy;
}

// Imprime a data e conta a quantidade de chamadas
void Date::print()
{
  cout << d << "/" << m << "/" << y << endl;
}

void Date::set_day(int value)
{
  if (value > 0 && value <= 31)
    d = value;
}

void Date::set_month(int value)
{
  if (value > 0 && value <= 12)
    m = value;
}

void Date::set_year(int value)
{
  if (value >= 0)
    y = value;
}

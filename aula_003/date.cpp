#include "date.h"
#include <iostream>

using namespace std;

int Date::howmany = 0;

// Construtor
Date::Date(int dd, int mm, int yy) : d{dd}, m{mm}, y{yy}
{
  cout << "Objeto inicializado" << endl;
  count = 0;
  howmany++;
}

Date::~Date()
{
  cout << "Objeto destruído." << endl;
  howmany--;
}

// Imprime a data e conta a quantidade de chamadas
void Date::print() const
{
  cout << d << "/" << m << "/" << y << endl;
  count++;
}

void Date::set_day(int value)
{
  if (value > 0 && value <= 31)
    this->d = value;
}

void Date::set_month(int value)
{
  if (value > 0 && value <= 12)
    this->m = value;
}

void Date::set_year(int value)
{
  if (value >= 0)
    this->y = value;
}

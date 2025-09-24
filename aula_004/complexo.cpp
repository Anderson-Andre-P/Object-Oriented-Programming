#include "complexo.h"
#include <iostream>

using namespace std;

Complexo::Complexo(float r, float i)
{
  re = r;
  im = i;
};

// interface
void Complexo::print()
{
  cout << re << " + ( " << im << " )i";
};

Complexo Complexo::add(Complexo &par)
{
  float x = this->re + par.re;
  float y = this->im + par.im;

  return Complexo{x, y};
};

Complexo Complexo::sub(Complexo &par)
{
  float x = this->re - par.re;
  float y = this->im - par.im;

  return Complexo{x, y};
};

Complexo Complexo::operator+(Complexo &par)
{
  float x = this->re + par.re;
  float y = this->im + par.im;

  return Complexo{x, y};
};

Complexo Complexo::operator-(Complexo &par)
{
  float x = this->re - par.re;
  float y = this->im - par.im;

  return Complexo{x, y};
};

bool Complexo::operator!()
{
  if (re == 0 && im == 0)
    return true;
  return false;
};

// pré-incremento
Complexo &Complexo::operator++()
{
  this->re = this->re + 1;
  this->im = this->im + 1;

  return *this; // precisa retornar uma referência para o próprio objeto para funcionar com atribuição. Aceita n++ e a = n++; a = n.operator()++;
};

// pós-incremento
Complexo &Complexo::operator++(int)
{
  ++(*this); // incrementa
  return *this;
}

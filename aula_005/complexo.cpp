#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>

using namespace std;

class Complexo
{
private:
  double re, im;

public:
  Complexo(double = 0, double = 0);
  ~Complexo() {}
  double get_real() { return re; }
  double get_imag() { return im; }

  // Definindo os operadores
  Complexo operator+(Complexo &); // +
  Complexo operator-(Complexo &); // -

  friend void print(Complexo &);
};

#endif

// Construtor
Complexo::Complexo(double r, double i) : re{r}, im{i} {}

// Sobrecarga de operadores
// Soma
Complexo Complexo::operator+(Complexo &c)
{
  double r, i;
  r = re + c.get_real();
  i = im + c.get_imag();
  return Complexo{r, i};
}

// Subtração
Complexo Complexo::operator-(Complexo &c)
{
  double r, i;
  r = re - c.get_real();
  i = im - c.get_imag();
  return Complexo(r, i);
}

void print(Complexo &c)
{
  cout << c.re << " + (" << c.im << ")i" << endl
       << endl;
}

int main()
{
  Complexo a{10, 0};
  Complexo b(10, 15);

  a = a + b; // notação direta e simples
  // a = a.operator+(b); // notação explícita funcional
  b = b - a; // como em representação aritmética comum

  cout << "Números criados: " << endl;

  print(a);

  print(b);

  return 0;
}

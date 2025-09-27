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
  friend Complexo operator+(Complexo &, Complexo &); // +
  Complexo operator-(Complexo &);                    // -

  friend void print(const Complexo &);

  friend ostream &operator<<(ostream &, const Complexo &);
  friend istream &operator>>(istream &, Complexo &);
};

#endif

// Construtor
Complexo::Complexo(double r, double i) : re{r}, im{i} {}

// Sobrecarga de operadores
// Soma
Complexo operator+(Complexo &c1, Complexo &c2)
{
  double r, i;
  r = c1.re + c2.re;
  i = c1.im + c2.im;
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

void print(const Complexo &c)
{
  cout << c.re << " + (" << c.im << ")i" << endl
       << endl;
}

ostream &operator<<(ostream &out, const Complexo &c)
{
  out << c.re << " + (" << c.im << ")i" << endl;

  return out;
}

istream &operator>>(istream &in, Complexo &c)
{
  in >> c.re >> c.im;

  return in;
}

int main()
{
  Complexo a, b;

  cout << "Entre com o complexo a: ";
  cin >> a;
  cout << "Agora, entre com o complexo b: ";
  cin >> b;

  a = a + b; // notação direta e simples
  // a = a.operator+(b); // notação explícita funcional
  b = b - a; // como em representação aritmética comum

  cout << "Números criados: " << endl;

  cout << a; // Nesse caso precisa sobrecarregar o operador "<<", porém, não tem como sobrecarregar o "cout". Por isso tem que fazer como friend já que não temos acesso a lib IO do CPP.

  // print(a);

  // print(b);

  return 0;
}

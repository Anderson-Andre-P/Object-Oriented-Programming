#ifndef CIRCULO_H
#define CIRCULO_H

#include "forma.h"
#include <iostream>

using namespace std;

class Circulo : public Forma
{
private:
  double r;

public:
  Circulo(double, double, double);
  ~Circulo() {}
  double area();
  void imprime_dados();
};

#endif

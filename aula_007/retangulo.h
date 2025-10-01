#ifndef RETANGULO_H
#define RETANGULO_H

#include "forma.h"

class Retangulo : public Forma
{
private:
  double b, h;

public:
  Retangulo(double, double, double, double); // x, y, b, h

  ~Retangulo() {};

  void imprime_dados();

  double area();
};

#endif

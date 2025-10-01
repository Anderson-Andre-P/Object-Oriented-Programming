#ifndef FORMA_H
#define FORMA_H

class Forma
{ // Abstrata
protected:
  double x, y;

public:
  Forma(double = 0, double = 0);

  ~Forma() {}

  virtual void imprime_dados();

  virtual double area() = 0; // Função virtual pura, ela não é implementada
};

#endif

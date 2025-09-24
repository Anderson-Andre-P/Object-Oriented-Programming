#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo
{
private:
  float re, im;

public:
  Complexo(float = 0.0, float = 0.0); // construtor
  ~Complexo() {};                     // destrutor

  // interface
  void print();
  Complexo add(Complexo &);
  Complexo sub(Complexo &);

  // Sobrecarga de operadores
  Complexo operator+(Complexo &); // operador binário
  Complexo operator-(Complexo &); // operador binário
  bool operator!();               // operador unário
  Complexo &operator++();         // operador unário - pré-incremento
  Complexo &operator++(int);      // operador unário - pós-incremento
};

#endif

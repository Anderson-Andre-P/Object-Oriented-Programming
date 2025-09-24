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
};

#endif

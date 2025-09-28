#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include "pessoa.h"

class Aluno : public Pessoa
{
private:
  string curso;
  int matricula;

public:
  Aluno(string, string, string, int);
  ~Aluno() {}

  void setCurso(string);
};

#endif

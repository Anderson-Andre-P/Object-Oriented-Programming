#include "aluno.h"

Aluno::Aluno(string n, string e, string c, int m) : Pessoa{n, e}, curso{c}, matricula{m} {}

void Aluno::setCurso(string c)
{
  curso = c;
}

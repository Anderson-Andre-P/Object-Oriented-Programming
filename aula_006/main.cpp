#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
#include <iostream>

using namespace std;

int main()
{
  Pessoa p1{"Andershow", "Los Angeles"};

  p1.imprime();

  Aluno a1{"Andershow", "Los Angeles", "SI", 15642};
  a1.imprime();

  Professor prof1{"Andershow", "Los Angeles", 1, 2, "UNIFEI"};
  prof1.imprime();

  return 0;
}

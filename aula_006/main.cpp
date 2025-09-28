#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
#include <iostream>

using namespace std;

int main()
{
  Pessoa p1{"Andershow", "Los Angeles"};
  p1.imprime();

  cout << endl;

  Aluno a1{"Andershow", "Los Angeles", "SI", 15642};
  a1.imprime();

  cout << endl;

  Professor prof1{"Andershow", "Los Angeles", 1, 2, "UNIFEI"};
  prof1.imprime();

  cout << endl;

  Pessoa p2 = prof1;
  cout << "Outra pessoa: " << endl;
  p2.imprime();

  return 0;
}

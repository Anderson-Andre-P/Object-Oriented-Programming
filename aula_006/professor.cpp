#include "professor.h"
#include <iostream>

Professor::Professor(string n, string e, int s, int c, string i) : Pessoa{n, e}
{
  siape = s;
  categoria = c;
  instituto = i;
}

void Professor::imprime()
{
  Pessoa::imprime();
  cout << "SIAPE: " << siape << endl;
  cout << "Categoria: " << categoria << endl;
  cout << "Instituto: " << instituto << endl;
}

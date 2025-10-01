#include "forma.h"
#include "retangulo.h"
#include <iostream>

using namespace std;

int main()
{
  cout << "Forma: " << endl;

  Forma ponto1(10.0, 20.0);

  ponto1.imprime_dados();

  cout << "Area = " << ponto1.area() << endl;

  cout << "\n";

  cout << "Retangulo: " << endl;

  Retangulo ret1(0, 0, 10, 50);

  ret1.imprime_dados();

  return 0;
}

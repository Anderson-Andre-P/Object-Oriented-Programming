#include "forma.h"
#include "retangulo.h"
#include "circulo.h"
#include <iostream>

using namespace std;

int main()
{
  cout << "Forma: " << endl;

  Forma *ponto1 = new Forma(10.0, 20.0);

  ponto1->imprime_dados();

  cout << "Area = " << ponto1->area() << endl;

  cout << "\n";

  cout << "Retangulo: " << endl;

  Retangulo *ret1 = new Retangulo(0, 0, 10, 50);

  ret1->imprime_dados();

  cout << "\n";

  cout << "Circulo: " << endl;

  Circulo *circ1 = new Circulo(0, 0, 10);

  circ1->imprime_dados();

  return 0;
}

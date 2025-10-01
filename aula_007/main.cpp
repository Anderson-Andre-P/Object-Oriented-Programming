#include "forma.h"
#include <iostream>

using namespace std;

int main()
{
  Forma ponto1(10.0, 20.0);

  ponto1.imprime_dados();

  cout << "Area = " << ponto1.area() << endl;

  return 0;
}

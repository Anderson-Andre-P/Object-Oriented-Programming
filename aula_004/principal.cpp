#include "complexo.h"
#include <iostream>

using namespace std;

int main()
{
  Complexo n1{10, 20};
  Complexo n2{25, 50};

  cout << "n1 = ";
  n1.print();

  cout << endl;

  cout << "n2 = ";
  n2.print();

  cout << endl;

  return 0;
}

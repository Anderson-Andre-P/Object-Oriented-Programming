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

  cout << endl
       << endl;

  Complexo n3;
  Complexo n4;

  if (!n3 && !n4)
    cout << "n3 e n4 inicialmente iguais a 0." << endl
         << endl;

  n3 = n1 + n2; // n3 = n1 + n2
  n4 = n1 - n2; // n4 = n1 - n2

  cout << "n3 (add) = ";
  n3.print();

  cout << endl;

  cout << "n4 (sub) = ";
  n4.print();

  cout << endl
       << endl;

  // n1 = ++n2;
  n1 = n2++;

  cout << "Após o incremento:";
  cout << "n1 = ";
  n1.print();

  cout << endl
       << endl;

  return 0;
}

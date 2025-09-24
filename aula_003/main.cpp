#include <iostream>
#include "date.h"

using namespace std;

int main()
{
  const Date aniversario{11, 4, 1999};

  cout << "Aniversário do Andershow: ";
  aniversario.print();

  cout << "Mês do aniversário: " << aniversario.get_month() << endl;

  return 0;
}
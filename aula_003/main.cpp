#include <iostream>
#include "date.h"

using namespace std;

int main()
{
  Date aniversario{11, 4, 1999};

  cout << "Aniversário do Andershow: ";
  aniversario.print();

  cout << "Mês do aniversário: " << aniversario.get_month() << endl;

  aniversario.set_day(99); // Não vai criar

  aniversario.print();

  return 0;
}
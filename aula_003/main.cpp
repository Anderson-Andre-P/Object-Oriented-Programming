#include <iostream>
#include "date.h"

using namespace std;

int main()
{
  const Date aniversario{11, 4, 1999};

  cout << "Aniversário do Andershow: ";
  aniversario.print();
  aniversario.print();
  aniversario.print();
  aniversario.print();
  aniversario.print();
  aniversario.print();
  aniversario.print();

  cout << "Mês do aniversário: " << aniversario.get_month() << endl;
  cout << "Quantidade de vezes que a data foi impressa: " << aniversario.get_count() << endl;

  return 0;
}
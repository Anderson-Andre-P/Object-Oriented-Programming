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

  cout << "Mês do aniversário: " << aniversario.get_month() << endl;
  cout << "Quantidade de vezes que a data foi impressa: " << aniversario.get_count() << endl;

  Date today{23, 9, 2025};
  cout << "Hoje: " << endl;
  today.print();

  cout << "Quantas instancias ativas: " << Date::how_many_instances() << endl;       // Acessando pelo operador de escopo
  cout << "Quantas instancias ativas: " << aniversario.how_many_instances() << endl; // Acessando pela classe
  cout << "Quantas instancias ativas: " << today.how_many_instances() << endl;

  return 0;
}
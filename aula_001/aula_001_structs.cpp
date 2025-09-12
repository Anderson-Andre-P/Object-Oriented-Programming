#include <iostream>
using namespace std;

/*
  Definição de uma struct (estrutura)

  Uma struct é um tipo composto que agrupa
  várias variáveis sob um mesmo nome.
  Cada variável dentro da struct é chamada de "membro".
*/

struct Time
{
  int hour;
  int minute;
  int second;
};

int main()
{
  cout << "\n========== REVISÃO DE STRUCTS EM C++ ==========\n\n";

  /*
    -------------------------------
    Criação e inicialização de struct
    -------------------------------
  */
  Time t{8, 10, 52}; // inicialização de uma struct (C++11+)

  cout << "--- Exibindo valores da struct ---\n";
  cout << "Hora inicial: " << t.hour << ":" << t.minute << ":" << t.second << "\n\n";

  /*
    -------------------------------
    Atribuição após criação
    -------------------------------
  */
  Time t2;      // struct criada sem valores iniciais
  t2.hour = 12; // atribuição direta dos membros
  t2.minute = 30;
  t2.second = 15;

  cout << "--- Struct criada e preenchida manualmente ---\n";
  cout << "Hora manual: " << t2.hour << ":" << t2.minute << ":" << t2.second << "\n\n";

  /*
    -------------------------------
    Array de structs
    -------------------------------
  */
  Time eventos[3] = {
      {9, 0, 0},
      {14, 30, 45},
      {20, 15, 10}};

  cout << "--- Array de structs ---\n";
  for (int i = 0; i < 3; i++)
  {
    cout << "Evento " << i + 1 << ": "
         << eventos[i].hour << ":"
         << eventos[i].minute << ":"
         << eventos[i].second << "\n";
  }

  cout << "\n====================================================================\n\n";

  return 0;
}

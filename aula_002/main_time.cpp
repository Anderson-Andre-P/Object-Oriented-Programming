#include <iostream>
#include "time.h"

using namespace std;

int main()
{
  cout << "\n========== TRABALHANDO COM OBJETOS DA CLASSE TIME ==========\n\n";

  /*
      -------------------------------
      Criando objetos Time
      -------------------------------
  */
  Time standard;               // Cria horário padrão 0:0:0
  Time customTime(11, 20, 45); // Cria horário customizado 11:20:45

  /*
      -------------------------------
      Exibindo horários
      -------------------------------
  */
  cout << "Standard Hour: ";
  standard.printTime();
  cout << "\n\n";

  cout << "Custom Hour: ";
  customTime.printTime();
  cout << "\n\n";

  /*
      -------------------------------
      Testando validação de horário
      -------------------------------
  */
  standard.setTime(1000, 25, 25); // Valores inválidos -> deve resetar para 0:0:0

  cout << "New Hour after invalid input: ";
  standard.printTime();
  cout << "\n\n";

  cout << "Programa finalizado com sucesso!\n";
  cout << "\n====================================================================\n\n";

  return 0;
}

#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
  cout << "\n========== TRABALHANDO COM OBJETOS DA CLASSE CIRCLE ==========\n\n";

  /*
      -------------------------------
      Criando objetos Circle
      -------------------------------
  */
  Circle c1;              // Cria um círculo padrão {0,0,0} usando o construtor default
  Circle c2(15.7, 8, -5); // Cria um círculo com raio 15.7 e centro (8,-5)
  Circle c3(7.7);         // Cria um círculo com raio 7.7 e centro padrão (0,0)

  cout << "Objetos Circle criados com sucesso!\n\n";

  /*
      -------------------------------
      Exibindo informações dos círculos
      -------------------------------
  */
  cout << "--- Detalhes dos círculos ---\n";

  cout << "Circle c1: ";
  c1.printCircle(); // Chama método que imprime raio e centro do círculo
  cout << "\n";

  cout << "Circle c2: ";
  c2.printCircle();
  cout << "\n";

  cout << "Circle c3: ";
  c3.printCircle();
  cout << "\n\n";

  /*
      -------------------------------
      Calculando propriedades dos círculos
      -------------------------------
  */
  cout << "--- Propriedades dos círculos ---\n";

  cout << "Circle c1 Diameter: " << c1.diameter() << "\n"; // Diâmetro = 2*raio
  cout << "Circle c1 Area: " << c1.area() << "\n";         // Área = π*raio²
  cout << "\n";

  cout << "Circle c2 Diameter: " << c2.diameter() << "\n";
  cout << "Circle c2 Area: " << c2.area() << "\n";
  cout << "\n";

  cout << "Circle c3 Diameter: " << c3.diameter() << "\n";
  cout << "Circle c3 Area: " << c3.area() << "\n";
  cout << "\n";

  /*
      -------------------------------
      Finalizando o programa
      -------------------------------
  */
  cout << "Programa finalizado com sucesso!\n";
  cout << "\n====================================================================\n\n";

  return 0;
}

#include "forma.h"
#include "retangulo.h"
#include "circulo.h"
#include <iostream>

using namespace std;

int main()
{
  // cout << "Forma: " << endl;

  // Forma *ponto1 = new Forma(10.0, 20.0);

  // ponto1->imprime_dados();

  // cout << "Area = " << ponto1->area() << endl;

  // cout << "\n";

  // cout << "Retangulo: " << endl;

  // Retangulo *ret1 = new Retangulo(0, 0, 10, 50);

  // ret1->imprime_dados();

  // cout << "\n";

  // cout << "Circulo: " << endl;

  // Circulo *circ1 = new Circulo(0, 0, 10);

  // circ1->imprime_dados();

  Forma *vector_formas[5]; // Aqui só aponta referência de Forma para objetos.

  vector_formas[0] = new Retangulo{10, 30, 45, 21};
  vector_formas[1] = new Retangulo{10, 30, 45, 21};
  // vector_formas[1] = new Forma{100, 120}; // Não tem mais como criar uma Forma por que Forma é abstrata. Não da para instanciar.
  vector_formas[2] = new Circulo{0, 0, 15.5};
  vector_formas[3] = new Circulo{9, 0.75, 18};
  vector_formas[4] = new Retangulo{0, 0, 10, 10};

  for (auto x : vector_formas)
  {
    cout << "Forma: " << endl;
    x->imprime_dados();
    cout << "\n\n";
  }

  return 0;
}

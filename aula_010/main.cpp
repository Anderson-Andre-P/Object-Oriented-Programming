#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  vector<int> idades;

  vector<int>::iterator it;

  idades.push_back(20); // Insere novo elemento no final do vetor
  idades.push_back(17); // Insere novo elemento no final do vetor
  idades.push_back(45); // Insere novo elemento no final do vetor
  idades.push_back(35); // Insere novo elemento no final do vetor
  idades.push_back(1);  // Insere novo elemento no final do vetor
  idades.pop_back();    // Remove o último elemento do vetor

  // erase iria apagar o item que estiver apontado. Exemplo "idades.erase(idades.begin());""

  cout << "Tamanho do vetor: " << idades.size() << endl;
  cout << "Elemento na posição 03: " << idades.at(3) << endl;

  cout << "Vetor desordenado: ";
  for (int i = 0; i < idades.size(); i++)
  {
    cout << idades[i] << " ";
  }

  cout << "\n"
       << endl;

  sort(idades.begin(), idades.end());
  cout << "Vetor ordenado: ";
  for (it = idades.begin(); it != idades.end(); ++it)
  {
    cout << (*it) << " ";
  }

  return 0;
}

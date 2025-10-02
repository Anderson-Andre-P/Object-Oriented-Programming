#include <iostream>
#include <cstdlib>
#include "pilha.h"

using namespace std;

// template <typename T>
// void print_vetor(T *v, int sz)
// {
//   for (int i = 0; i < 10; i++)
//   {
//     cout << v[i] << " ";
//   }
// }

int main()
{
  // float vf[10];
  // int vi[10];

  // // preenche os vetores aleatóriamente
  // for (int i = 0; i < 10; i++)
  // {
  //   vf[i] = (float)(rand() % 100) / 100;
  // }

  // for (int i = 0; i < 10; i++)
  // {
  //   vi[i] = rand() % 100;
  // }

  // cout << "Vetor de float: " << endl;
  // print_vetor(vf, 10);

  // cout << "Vetor de int: " << endl;
  // print_vetor(vi, 10);

  // cout << "Pilhas: " << endl;

  Pilha<float, 50> p; // COm template só precisa trocar o tipo de dado aqui (int, flota, string etc);
  float v = 0;

  cout << "Inserindo itens na pilha: " << endl;

  while (v != -1)
  {
    cin >> v;
    p.push(v);
  }

  cout << "Removendo itens..." << endl;
  while (!(p.is_empty()))
  {
    p.pop(v);
    cout << v << " ";
  }

  return 0;
}

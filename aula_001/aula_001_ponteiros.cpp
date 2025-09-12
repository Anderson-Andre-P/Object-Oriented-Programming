#include <iostream>
using namespace std;

/*
  Exemplos de funções com diferentes formas de passagem de parâmetros
*/

// Passagem por valor (cópia) -> não altera a variável original
void soma(int x, int y, int z)
{
  z = x + y;
}

// Passagem por ponteiro -> altera a variável original via endereço
void soma2(int *x, int *y, int *z)
{
  *z = *x + *y;
}

// Passagem por referência -> altera a variável original diretamente
void soma3(int &x, int &y, int &z)
{
  z = x + y;
}

int main()
{
  cout << "\n========== REVISÃO DE PONTEIROS, REFERÊNCIAS E PARÂMETROS ==========\n\n";

  /*
  -------------------------------
  Variáveis, endereços e ponteiros
  -------------------------------
  */
  int a = 50;
  cout << "Valor da variável a: " << a << "\n";
  cout << "Endereço da variável a (&a): " << &a << "\n";

  cout << "\n--- Ponteiros ---\n";

  int *ptr_a = nullptr; // Ponteiro nulo (boa prática inicializar assim).
  ptr_a = &a;           // agora ptr_a aponta para a.

  cout << "Valor da variável ptr_a (endereço de a): " << ptr_a << "\n";
  cout << "Valor apontado pela variável ptr_a (*ptr_a): " << *ptr_a << "\n";
  cout << "Endereço apontado pela variável ptr_a (&ptr_a): " << &ptr_a << "\n";

  cout << "\n--- Referências ---\n";

  int &refa = a;
  cout << "Valor apontado pelo refa (mesmo que a): " << refa << "\n";

  /*
    -------------------------------
    Diferença entre passagem por valor,
    por ponteiro e por referência
    -------------------------------
  */
  cout << "\n--- Passagem de parâmetros ---\n";

  int q = 10, w = 20, e = 0;

  soma(q, w, e); // por valor -> NÃO altera e
  cout << "Valor de e (por valor): " << e << "\n";

  soma2(&q, &w, &e); // por ponteiro -> altera e
  cout << "Valor de e (por referência ponteiro): " << e << "\n";

  soma3(q, w, e); // por referência -> altera e
  cout << "Valor de e (por referência de referência): " << e << "\n";

  /*
    -------------------------------
    Demonstração de alteração via referência e ponteiro
    -------------------------------
  */

  cout << "\n--- Alterando valores ---\n";

  cout << "Valor inicial de a: " << a << "\n";

  *ptr_a = 100; // altera a via ponteiro
  cout << "Após *ptr_a = 100, valor de a: " << a << "\n";

  refa = 200; // altera a via referência
  cout << "Após refa = 200, valor de a: " << a << "\n";

  cout << "\n====================================================================\n\n";

  return 0;
}
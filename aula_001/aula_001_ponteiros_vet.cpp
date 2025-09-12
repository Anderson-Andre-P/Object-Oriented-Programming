#include <iostream>
#include <cstdlib> // para rand()
#define SIZE 50    // Tamanho do vetor dinâmico

using namespace std;

int main()
{
  cout << "\n========== REVISÃO DE VETORES DINÂMICOS COM PONTEIROS ==========\n\n";

  /*
    -------------------------------
    Alocação dinâmica de memória
    -------------------------------
  */
  int *vet = nullptr;  // Ponteiro para armazenar o endereço do vetor dinâmico
  vet = new int[SIZE]; // Aloca dinamicamente um vetor de SIZE inteiros

  cout << "Memória alocada dinamicamente para " << SIZE << " inteiros.\n\n";

  /*
    -------------------------------
    Preenchendo o vetor
    -------------------------------
  */
  for (int i = 0; i < SIZE; i++)
  {
    vet[i] = rand() % 10; // Preenche cada posição com número aleatório entre 0 e 9
  }

  cout << "--- Vetor preenchido (acesso por índice) ---\n";
  for (int i = 0; i < SIZE; i++)
  {
    cout << vet[i] << " "; // Imprime o valor armazenado na posição i
  }

  cout << "\n\n";

  /*
    -------------------------------
    Percorrendo o vetor com ponteiros
    -------------------------------
  */
  cout << "--- Vetor percorrido com ponteiros ---\n";
  for (int *ptr = vet; ptr < vet + SIZE; ptr++)
  {
    cout << *ptr << " "; // *ptr acessa o valor apontado
  }

  cout << "\n\n";

  /*
    -------------------------------
    Liberação da memória
    -------------------------------
  */
  delete[] vet; // Libera a memória alocada dinamicamente
  cout << "Memória liberada com delete[].\n";

  cout << "\n====================================================================\n\n";

  return 0;
}

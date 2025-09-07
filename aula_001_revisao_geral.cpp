#include <iostream>
#include <string>
#include <limits> // Necessário para cin.ignore
#include <cmath>  // Necessário para sqrt
using namespace std;

// Protótipo de função
int square(int);

int main()
{
  cout << "\n========== REVISÃO DE BASES DO C++ ==========\n\n";

  /*
    ===========================================================
    1. Declaração e inicialização de variáveis
    ===========================================================
  */
  cout << "--- Declaração e inicialização de variáveis ---\n";

  double d1 = 2.3;   // Inicialização com "="
  double d2{2.3};    // Inicialização uniforme (C++11+)
  double d3 = {2.3}; // Inicialização uniforme com "=" redundante

  cout << "d1 = " << d1 << ", d2 = " << d2 << ", d3 = " << d3 << "\n";

  int i1 = 7.2; // i1 recebe 7 (perde a parte decimal)
  cout << "i1 (int a partir de 7.2) = " << i1 << "\n";
  // int i2{7.2}; // ERRO: conversão perigosa (não compila)

  /*
    ===========================================================
    2. Inferência de tipo com auto
    ===========================================================
  */
  cout << "\n--- Inferência de tipo com auto ---\n";

  auto b = true;    // bool
  auto ch = 'X';    // char
  auto h = 123;     // int
  auto d = 1.2;     // double
  auto z = sqrt(h); // tipo deduzido a partir do retorno da função sqrt

  cout << "b = " << b << " (bool)\n";
  cout << "ch = " << ch << " (char)\n";
  cout << "h = " << h << " (int)\n";
  cout << "d = " << d << " (double)\n";
  cout << "z = " << z << " (double, retorno de sqrt)\n";

  /*
    ===========================================================
    3. Controle de fluxo (comentado para estudo)
    ===========================================================
      - Seleção: if, if/else, switch
      - Repetição: while, do/while, for, range-for
  */

  /*
    ===========================================================
    4. Vetores e laços de repetição
    ===========================================================
  */
  cout << "\n--- Vetores e laços de repetição ---\n";

  int vetor[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "Percorrendo o vetor com for tradicional:\n";
  for (int i = 0; i < 10; i++)
  {
    cout << vetor[i] << " ";
  }
  cout << "\n\n";

  cout << "Percorrendo o vetor com range-for:\n";
  for (int x : vetor)
  {
    cout << x << " ";
  }
  cout << "\n\n";

  /*
    ===========================================================
    5. Entrada de dados com cin e getline
    ===========================================================
  */
  cout << "--- Entrada de dados ---\n";

  string nome;
  string nomeCompleto;

  cout << "Entre com seu nome: ";
  cin >> nome; // lê apenas até o espaço
  cout << "Olá, " << nome << "\n";

  // limpa o buffer para usar getline depois
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Entre com nome completo: ";
  getline(cin, nomeCompleto); // lê até o ENTER
  cout << "Nome completo: " << nomeCompleto << "\n\n";

  /*
    ===========================================================
    6. Funções
    ===========================================================
  */
  cout << "--- Funções ---\n";

  int n = 5;
  cout << "Número escolhido: " << n << "\n";
  cout << "Quadrado de " << n << " = " << square(n) << "\n";

  cout << "\n========== FIM DO PROGRAMA ==========\n\n";

  return 0;
}

// Função que retorna o quadrado de um número
int square(int num)
{
  return num * num;
}

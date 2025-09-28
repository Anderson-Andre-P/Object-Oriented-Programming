
#include "pessoa.h"
#include <string>
#include <iostream>

using namespace std;

Pessoa::Pessoa(string n, string e) : nome{n}, endereco{e} {}

void Pessoa::setEndereco(string e)
{
  endereco = e;
}

void Pessoa::imprime()
{
  cout << "Nome: " << nome << endl;
  cout << "Endereço: " << endereco << endl;
}

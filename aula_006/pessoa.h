#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa
{
  // protected vai fazer o mesmo que o private nesse contexto.
  // Porém, se uma classe herdar de pessoa ela vai ter acesso ao nome e endereco
protected:
  string nome;
  string endereco;

public:
  Pessoa(string, string);
  ~Pessoa() {};
  void setEndereco(string);
  void imprime();
};

#endif

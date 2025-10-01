#include <iostream>
#include <stdexcept>

using namespace std;

class DividePorZeroException : public runtime_error
{
public:
  DividePorZeroException() : runtime_error("Tentativa de divisão por zero!") {}
};

int quociente(int n, int m)
{
  if (m == 0)
    throw DividePorZeroException();
  return n / m;
}

int main()
{
  int x = 0, y = 0;

  cout << "Entre com os valores de X e Y: ";
  cin >> x >> y;

  try
  {
    cout << "Resultado: " << quociente(x, y) << endl;
  }
  catch (DividePorZeroException &ex)
  {
    cout << "Ocorreu um erro: " << ex.what() << endl;
  }

  cout << "Programa finalizado com sucesso!" << endl;

  return 0;
}

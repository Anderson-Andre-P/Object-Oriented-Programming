#include <iostream>
#include <queue>

using namespace std;

int main()
{
  priority_queue<float> prioridades;

  prioridades.push(1.7);
  prioridades.push(10.9);
  prioridades.push(7.7);
  prioridades.push(89.0);
  prioridades.push(1.0);
  prioridades.push(45.8);

  cout << "Removendo em ordem de prioridade: " << endl;
  while (!prioridades.empty())
  {
    cout << prioridades.top() << " ";
    prioridades.pop();
  }

  return 0;
}

#include <list>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  list<string> nomes;
  list<string>::iterator it;

  nomes.push_back("Andershow");
  nomes.push_back("Andre");
  nomes.push_back("Foreman Grill");

  it = nomes.begin();

  nomes.insert(it, "George");
  ++it;
  ++it;

  nomes.insert(it, "Mary Jane");

  cout << "Lista encadeada de nomes: " << endl;

  for (it = nomes.begin(); it != nomes.end(); it++)
  {
    cout << *it << " ";
  }

  nomes.remove("George");
  nomes.remove("Foreman Grill");

  cout << "\n\n";

  for (it = nomes.begin(); it != nomes.end(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}

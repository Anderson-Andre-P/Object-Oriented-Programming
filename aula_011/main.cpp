#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

int main()
{
  set<int> arvore; // set é uma DSA que não permite valores duplicados na estrutura
  set<int>::iterator it;

  // // multiset tem as mesmas características do set, porém permite duplicatas
  // multiset<int> arvore;
  // multiset<int>::iterator it;

  // map permite inserir pares
  map<int, string> arvoreMap;
  map<int, string>::iterator itMap;
  arvoreMap.insert(make_pair(1234, "Andershow"));
  pair<int, string> par{1999, "Andre"};
  arvoreMap.insert(par);
  arvoreMap.insert(make_pair(2099, "Miranha"));
  arvoreMap.erase(2099); // apaga o elemento pela chave
  cout << "Quantidade de elementos: " << arvoreMap.size() << endl;
  cout << "Elementos: \n";
  for (itMap = arvoreMap.begin(); itMap != arvoreMap.end(); ++itMap)
  {
    cout << itMap->first << " - " << itMap->second << endl;
  }

  arvore.insert(20);
  arvore.insert(10);
  arvore.insert(10);
  arvore.insert(10);
  arvore.insert(14);
  arvore.insert(12);
  arvore.insert(11);

  arvore.erase(11);

  cout << "Quantidade de elementos: " << arvore.size() << endl;
  cout << "Elementos: ";

  for (it = arvore.begin(); it != arvore.end(); ++it) // A árvore é percorrida em ordem por set um conjunto do tipo "set"
  {
    cout << *it << " ";
  }

  cout << endl;

  return 0;
}

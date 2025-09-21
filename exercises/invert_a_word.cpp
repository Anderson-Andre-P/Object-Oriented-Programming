// Invert a word
// Description: receives a word and prints its inverse

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string word;
  cout << "Type an word: ";
  cin >> word;

  for (int i = word.length() - 1; i >= 0; i--)
  {
    cout << word[i];
  }

  cout << endl;

  return 0;
}

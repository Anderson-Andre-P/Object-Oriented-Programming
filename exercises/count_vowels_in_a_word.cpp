// Count vowels in a word
// Description: counts how many vowels there are in a string

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word;
  int count = 0;

  cout << "Type an word: ";
  cin >> word;

  for (size_t i = 0; i < word.length(); i++)
  {
    char c = tolower(word[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      count++;
  }

  cout << "Number of vowels: " << count << endl;

  return 0;
}
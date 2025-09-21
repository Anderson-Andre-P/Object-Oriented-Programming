// Count spaces in a sentence
// Description: counts how many spaces there are in a string

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string sentence;
  cout << "Enter a sentence: ";
  getline(cin, sentence);

  int count = 0;

  for (char c : sentence)
  {
    if (c == ' ')
      count++;
  }

  cout << "\nThe sentence you entered was:\n\"" << sentence << "\"" << endl;
  cout << "Number of spaces found: " << count << endl;

  return 0;
}
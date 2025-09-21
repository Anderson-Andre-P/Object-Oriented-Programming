// Check for palindrome
// Description: checks if a word is a palindrome

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word;

  cout << "Type a word: ";
  cin >> word;

  bool isPalindrome = true;

  for (int i = 0, j = word.length() - 1; i < j; i++, j--)
  {
    if (word[i] != word[j])
    {
      isPalindrome = false;
      break;
    }
  }

  if (isPalindrome)
    cout << word << " is an palindrome!" << endl;
  else
    cout << word << " not is an palindrome" << endl;

  return 0;
}
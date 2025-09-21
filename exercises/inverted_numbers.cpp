// Inverted numbers
// Description: receives an integer and prints its digits inverted

#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter a number: ";
  cin >> n;

  cout << "Inverted number: ";
  while (n != 0)
  {
    cout << n % 10;
    n /= 10;
  }

  cout << endl;

  return 0;
}
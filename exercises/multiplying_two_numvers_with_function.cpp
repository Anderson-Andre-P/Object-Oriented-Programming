// Multiplying two numbers with functions
// Description: uses a function to multiply two numbers

#include <iostream>
using namespace std;

int multiplying(int a, int b)
{
  return a * b;
}

int main()
{
  int x, y;
  cout << "Enter two numbers separated by spaces: ";
  cin >> x >> y;
  cout << "Result: " << multiplying(x, y) << endl;
  return 0;
}

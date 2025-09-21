// Even numbers in a range
// Description: prints all even numbers between 1 and N.

#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter the upper limit: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
      cout << i << " ";
  }

  cout << endl;

  return 0;
}

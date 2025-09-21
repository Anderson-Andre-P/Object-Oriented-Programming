// Prime number verification
// Description: checks whether a number is prime or not.

#include <iostream>
using namespace std;

int main()
{
  int n;
  bool prime = true;

  cout << "Type a number: "; // Max number is equals to 2147483647
  cin >> n;

  if (n < 2)
    prime = false;

  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      prime = false;
      break;
    }
  }

  if (prime)
    cout << n << " is prime!" << endl;
  else
    cout << n << " not's prime!" << endl;

  return 0;
}

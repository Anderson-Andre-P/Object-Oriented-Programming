// Digit count
// Description: counts the number of digits in a whole number

#include <iostream>
using namespace std;

int main()
{
  long long n; // suports 19 digits
  int count = 0;

  cout << "Type a number: ";
  cin >> n;

  long long temp = n;

  if (temp == 0)
  {
    count = 1;
  }
  else
  {
    while (temp != 0)
    {
      temp /= 10;
      count++;
    }
  }

  cout << "Number of digits: " << count << endl;

  return 0;
}

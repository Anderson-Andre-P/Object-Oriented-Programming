// Average of even and odd numbers
// Description: calculates separete averages for even and odd numbers

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "How many numbers will you enter? ";
  cin >> n;

  int num, sumOdd = 0, sumEven = 0, countOdd = 0, countEven = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Enter number " << (i + 1) << " of " << n << ": ";
    cin >> num;
    if (num % 2 == 1)
    {
      sumOdd += num;
      countOdd++;
    }
    else
    {
      sumEven += num;
      countEven++;
    }
  }

  cout << "Average of even numbers: " << (countEven ? (double)sumEven / countEven : 0) << endl;

  cout << "Average of odd numbers: " << (countOdd ? (double)sumOdd / countOdd : 0) << endl;

  return 0;
}
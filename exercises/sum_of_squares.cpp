// Sum of squares
// Description: adds the squares of N numbers

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "How many numbers will you enter? ";
  cin >> n;

  int num, sum = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Enter number " << (i + 1) << " of " << n << ": ";
    cin >> num;
    sum += num * num;
  }

  cout << "Sum of squares: " << sum << endl;

  return 0;
}

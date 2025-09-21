// Sum N Numbers
// Description: receives N numbers from the user and calculates the total sum.

#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0, num;

  cout << "How many numbers do you want to count? ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Type an number: " << i + 1 << ": ";
    cin >> num;
    sum += num;
  }

  cout << "The sum is equals to " << sum << endl;

  return 0;
}

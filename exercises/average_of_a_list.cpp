// Average of a list of numbers
// Description: calculates the average of values stored in a vector.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cout << "How many numbers do you want to enter? ";
  cin >> n;

  vector<double> numbers(n);
  double sum = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Numbers " << i + 1 << ": ";
    cin >> numbers[i];
    sum += numbers[i];
  }

  double average = sum / n;

  cout << "The sum of all numbers is: " << sum << endl;
  cout << "The average is: " << average << endl;

  return 0;
}

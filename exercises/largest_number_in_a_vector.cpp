// Largest number in a vector
// Description: finds the largest number among the elements of a vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;

  cout << "How many numbers do you want to enter? ";
  cin >> n;

  vector<int> numbers(n);

  for (int i = 0; i < n; i++)
  {
    cout << "Number " << i + 1 << ": ";
    cin >> numbers[i];
  }

  int Largest = numbers[0];

  for (int i = 1; i < n; i++)
  {
    if (numbers[i] > Largest)
      Largest = numbers[i];
  }

  cout << "The largest number is: " << Largest << endl;

  return 0;
}
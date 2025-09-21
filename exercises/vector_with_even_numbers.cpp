// Vector with even numbers
// Description: stores only enven numbers entered by the user

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cout << "How many numbers do you want to enter? ";
  cin >> n;

  int count = 0;
  vector<int> vector(n);

  for (int i = 0; i < n; i++)
  {
    int x;
    cout << "Number " << i + 1 << ": ";
    cin >> x;

    if (x % 2 == 0)
    {
      vector[count++] = x;
    }
  }

  cout << "Even numbers: ";

  for (int i = 0; i < count; i++)
  {
    cout << vector[i] << " ";
  }

  cout << endl;

  return 0;
}
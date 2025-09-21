// Invert a vector
// Description: receives N numbers and reverses their order

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;

  cout << "How many numbers? ";
  cin >> n;

  vector<int> vector(n);

  for (int i = 0; i < n; i++)
  {
    cout << "Number: " << i + 1 << ": ";
    cin >> vector[i];
  }

  cout << "Reverse vector: ";
  for (int i = n - 1; i >= 0; i--)
  {
    cout << vector[i] << " ";
  }

  cout << endl;

  return 0;
}
// Add elements of two vectors
// Description: adds two vectors element by element and prints the result

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cout << "How many elements will the vectors have? ";
  cin >> n;

  vector<int> vectorOne(n), vectorTwo(n), sum(n);

  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i + 1 << " of vector one: ";
    cin >> vectorOne[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i + 1 << " of vector two: ";
    cin >> vectorTwo[i];
  }

  for (int i = 0; i < n; i++)
  {
    sum[i] = vectorOne[i] + vectorTwo[i];
    cout << sum[i] << " ";
  }

  cout << endl;

  return 0;
}

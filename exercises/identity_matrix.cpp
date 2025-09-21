// Identity matrix
// Description: creates an NxN identity matrix

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cout << "Enter the size of the matrix (N): ";
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n, 0));

  cout << "\nIdentity Matrix of size " << n << "x" << n << ":\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      matrix[i][j] = (i == j) ? 1 : 0;
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
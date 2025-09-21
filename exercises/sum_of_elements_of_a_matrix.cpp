// Sum of elements of a matrix
// Description: adds all the elements of a 3x3 matrix

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int row = 3, column = 3, sum = 0;
  vector<vector<int>> matrix(row, vector<int>(column, 0));

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      cout << "Enter element [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
      sum += matrix[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    cout << "[ ";
    for (int j = 0; j < column; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << " ]" << endl;
  }

  cout << "Sum of all elements: " << sum << endl;

  return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

  int my_array[] = {64, 34, 25, 12, 22, 11, 90, 5};
  int n = sizeof(my_array) / sizeof(my_array[0]);

  cout << "Sizeof: " << n << endl;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (my_array[j] > my_array[j + 1])
      {
        int temp = my_array[j];
        my_array[j] = my_array[j + 1];
        my_array[j + 1] = temp;
      }
    }
  }

  cout << "Sorted array: " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << my_array[i] << ", " << endl;
  }

  cout << "\n";

  return 0;
}
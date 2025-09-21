// Swap values using pointer
// Description: swaps two numbers using pointers

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x = 5, y = 20;

  cout << "Before: x = " << x << " y = " << y << endl;
  swap(&x, &y);
  cout << "After: x = " << x << " y = " << y << endl;

  return 0;
}
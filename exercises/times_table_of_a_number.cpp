// Times table of a number
// Description: displays the times tables from 1 to 10 of a given number

#include <iostream>
using namespace std;

int main()
{
  double n;
  cout << "Type a number: ";
  cin >> n;

  for (int i = 1; i <= 10; i++)
  {
    cout << n << " x " << i << " = " << n * i << endl;
  }

  return 0;
}

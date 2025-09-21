// Countdown
// Description: displays a countdown from N to 0.

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Type the starting number: ";
  cin >> n;

  for (int i = n; i >= 0; i--)
  {
    cout << i << " ";
  }

  cout << endl;

  return 0;
}
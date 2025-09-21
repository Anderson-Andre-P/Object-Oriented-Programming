// Countdown with delay
// Description: prints a countdown simulating "time" (not real time)

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
  int n;
  cout << "Enter the starting number: ";
  cin >> n;

  for (int i = n; i >= 0; i--)
  {
    cout << i << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
  }

  return 0;
}

// 14 soma cumulativa
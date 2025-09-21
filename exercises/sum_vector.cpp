// Cumulative sum
// Description: creates a vector where each element is cumulative sum

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, sum = 0;

  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> values(n);

  cout << "Enter " << n << " numbers:\n";
  for (int i = 0; i < n; i++)
  {
    cout << "Enter " << i + 1 << " value: ";
    cin >> values[i];
  }

  cout << "\nCumulative sums:\n";
  for (int i = 0; i < n; i++)
  {
    sum += values[i];
    cout << "After elements " << i + 1 << " (" << values[i] << "): " << sum << endl;
  }

  cout << "\nAll cumulative sums printed succesfully." << endl;

  return 0;
}

// f(n) = f(n - 1) + f(n - 2);

// // Loop for
// #include <iostream>

// using namespace std;

// int main()
// {
//   int prev2 = 0;
//   int prev1 = 1;
//   int newFibo;

//   cout << "Valor 1 - " << prev2 << "\n";
//   cout << "Valor 2 - " << prev1 << "\n";

//   for (int fibo = 0; fibo < 18; fibo++)
//   {
//     newFibo = prev1 + prev2;
//     cout << fibo << " Novo Fibo - " << newFibo << "\n";
//     prev2 = prev1;
//     prev1 = newFibo;
//   }

//     return 0;
// }
#include <iostream>
using namespace std;

int counter = 2;

void fibonacci(int val1, int val2)
{
  int newFibo;

  if (counter <= 19)
  {

    newFibo = val1 + val2;
    cout << counter << " Novo Fibo - " << newFibo << "\n";
    counter += 1;

    fibonacci(newFibo, val1);
  }
  else
  {
    return;
  }
}

int main()
{

  fibonacci(1, 0);
  return 0;
}
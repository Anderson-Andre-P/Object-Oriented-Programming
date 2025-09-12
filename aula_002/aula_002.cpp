#include <iostream>
#include "header_class.h"

using namespace std;

int main()
{

  Time standard;

  Time customTime(11, 20, 45);

  cout << "Standard Hour: ";
  standard.printTime();

  cout << "\n\n";

  cout << "Custom Hour: ";

  customTime.printTime();

  cout << "\n\n";

  standard.setTime(1000, 25, 25);

  cout << "New Hour: ";
  standard.printTime();

  cout << "\n\n";

  return 0;
}

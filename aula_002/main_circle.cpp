#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
  Circle c1; // {0,0,0} // standard
  Circle c2(15.7, 8, -5);
  Circle c3(7.7); // {7.7, 0,0}

  cout << "Circle c1: ";
  c1.printCircle();

  cout << "\n";

  cout << "Circle c2: ";
  c2.printCircle();

  cout << "\n";

  cout << "Circle c3: ";
  c3.printCircle();

  cout << "\n\n";

  cout << "Circle c1 Diameter: " << c1.diameter() << "\n";
  cout << "Circle c1 Area: " << c1.area() << "\n";

  cout << "\n";

  cout << "Circle c2 Diameter: " << c2.diameter() << "\n";
  cout << "Circle c2 Area: " << c2.area() << "\n";

  cout << "\n";

  cout << "Circle c3 Diameter: " << c3.diameter() << "\n";
  cout << "Circle c3 Area: " << c3.area() << "\n";

  cout << "\n";

  return 0;
}
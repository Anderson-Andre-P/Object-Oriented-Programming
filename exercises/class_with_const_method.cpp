// Class with const method
// Description: method that does not change the object

#include <iostream>

using namespace std;

class Circle
{
public:
  double radius;
  double area() const { return 3.14 * radius * radius; }
};

int main()
{
  Circle c;
  c.radius = 4;

  cout << "Area: " << c.area() << endl;

  return 0;
}
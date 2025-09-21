// Rectangle class
// Description: calculates area and perimeter

#include <iostream>

using namespace std;

class Rectangle
{
public:
  double width, height;

  double area() { return width * height; }
  double perimeter() { return 2 * (height + width); }
};

int main()
{

  Rectangle r;
  r.width = 3;
  r.height = 3;

  cout << "Area: " << r.area() << ", perimeter: " << r.perimeter() << endl;

  return 0;
}

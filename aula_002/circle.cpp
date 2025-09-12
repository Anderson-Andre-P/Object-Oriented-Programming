#include "circle.h"
#include <iostream>

using namespace std;

// Circle::Circle()
// {
//   radius = 0.0;
//   x = y = 0;
// }

Circle::Circle(float rr, int xx, int yy)
{
  radius = rr;
  x = xx;
  y = yy;
}

// member functions for interface
float Circle::area()
{
  return radius * radius * 3.141592;
}

float Circle::diameter()
{
  return radius * 2;
}

// setters
void Circle::set_radius(float rr)
{
  if (rr > 0)
    radius = rr;
  else
    radius = 0;
}

void Circle::set_origin(int xx, int yy)
{
  x = xx;
  y = yy;
}

// getters
float Circle::get_radius()
{
  return radius;
}

void Circle::printCircle()
{
  cout << "{" << radius << "; " << x << "; " << y << "}";
}
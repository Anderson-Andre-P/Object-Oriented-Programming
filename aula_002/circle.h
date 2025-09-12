#ifndef CIRCLE_H

#define CIRCLE_H // Include Guards

class Circle
{
private:
  float radius;
  int x, y;

public:
  // Circle();
  Circle(float = 0, int = 0, int = 0); // intialize with default value
  ~Circle()
  {
  }

  // member functions for interface
  float area();
  float diameter();

  // setters
  void set_radius(float);
  void set_origin(int, int);

  // getters
  float get_radius();

  void printCircle();
};

#endif
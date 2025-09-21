// Simple inheritance
// Description: the 'Student' class inherits from 'Person'

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  string name;
};

class Student : public Person
{
public:
  int registration;
};

int main()
{
  Student a;
  a.name = "Andershow";
  a.registration = 15642;

  cout << "Student: " << a.name << ", registration: " << a.registration << endl;

  return 0;
}

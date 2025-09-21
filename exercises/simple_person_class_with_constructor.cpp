// Class Person with constructor
// Description: initializes attributes through the constructor

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  string name;
  int age;

  Person(string n, int i)
  {
    name = n;
    age = i;
  }

  void showData()
  {
    cout << name << " has " << age << " years." << endl;
  }
};

int main()
{

  Person p("Andershow", 26);
  p.showData();

  return 0;
}

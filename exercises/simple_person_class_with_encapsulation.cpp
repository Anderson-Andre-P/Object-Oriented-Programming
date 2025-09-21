// Simple person with encapsulation
// Description: uses private and get and set methods

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  void setName(string n) { name = n; }
  void setAge(int i) { age = i; }

  string getName() { return name; }
  int getAge()
  {
    return age;
  }
};

int main()
{

  Person p;
  p.setName("Andershow");
  p.setAge(26);

  cout << p.getName() << " has " << p.getAge() << " years." << endl;

  return 0;
}
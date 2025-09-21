// Simple person class
// Description: stores name and age, and prints data

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  string name;
  int age;

  void showData()
  {
    cout << "Name: " << name << ", age: " << age << endl;
  }
};

int main()
{
  Person p;

  p.name = "Andershow";
  p.age = 26;

  p.showData();

  return 0;
}
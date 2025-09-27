# Object-Oriented Programming (OOP) in C++ Repository

This repository contains a collection of resources, practical examples, and documentation related to Object-Oriented Programming (OOP) using C++. It focuses on providing a deep understanding of core OOP concepts and how to apply them effectively in software development.

The repository covers the fundamental pillars of OOP, such as classes, objects, inheritance, encapsulation, polymorphism, and abstraction, with clear examples and accessible explanations to facilitate learning.

* **Key Topics Covered:**

  * **Classes & Objects:** Definition and creation of classes and object instances.
  * **Inheritance:** Utilizing inheritance for code reuse and extending functionality.
  * **Encapsulation:** Controlling data access using access modifiers and methods.
  * **Polymorphism:** Implementing varied behaviors through the same interface.
  * **Abstraction:** Simplifying complexity by defining interfaces and hiding implementation details.

* **Purpose:**
  To provide in-depth explanations, practical examples, and tips to help master Object-Oriented Programming in C++. This repository serves as a solid foundation for both beginners and experienced programmers looking to deepen their OOP knowledge.

---
To compile the projects, use the comand bellow:

```bash
g++ -std=c++11 <nome_programa>.cpp <nome_programa>.cpp -o <nome_programa>.exe
```

OR

```bash
g++ -Wall -Wextra -g3 <nome_programa>.cpp <nome_programa>.cpp -o output/<nome_programa>
```

To run the compiled project, run:

```bash
./output/<nome_programa>
```


---

# Summary

## Difference between Private and Public

In **C++**, when you create a **class**, you can define whether each attribute or method is **public** (`public`) or **private** (`private`):

* **`public`**
  ➝ Can be accessed **from outside the class**.
  Example: if the attribute or method is `public`, any code can use it directly.

* **`private`**
  ➝ Can only be accessed **inside the class itself** (or by its own methods).
  From the outside, you cannot call it or change it directly.

---

### Example:

```cpp
#include <iostream>
using namespace std;

class Person {
private: // hidden
    string password;

public: // accessible
    string name;

    void setPassword(string s) {
        password = s;   // ok, inside the class we can access private
    }

    void showPassword() {
        cout << "Password: " << password << endl;
    }
};

int main() {
    Person p;
    p.name = "Andershow";     // ok, because name is public
    // p.password = "123";   // ERROR! password is private
    p.setPassword("123");    // ok, used a public method
    p.showPassword();        // shows the password

    return 0;
}
```

In short:

* **`public` = open** → anyone can access.
* **`private` = closed** → only the class itself controls it.

# Operator Overloading in C++

## What it is
**Operator overloading** in C++ is a feature that allows redefining the behavior of operators (such as `+`, `-`, `<<`, `>>`, etc.) so they can be used intuitively with user-defined types (classes and structs).  

This makes it possible for created objects to have operations similar to primitive types, improving code readability.

---

## How it works
Operator overloading is implemented through special functions whose names contain the operator keyword.  
It can be defined in two ways:
- **As a member function of the class** (e.g., `Complexo::operator-`).
- **As a friend function (`friend`)** when the operator needs access to private members but should not be a member function (e.g., `operator+`, `operator<<`, `operator>>`).

### General syntax
```cpp
// Inside the class
Type operator+(const Type &other);

// Outside the class (friend)
friend Type operator+(const Type &a, const Type &b);
```

---

## Purpose

* **Improve code readability:** allows writing `a + b` instead of `a.sum(b)`.
* **Facilitate the use of custom types:** class objects can be manipulated like primitive types.
* **Integrate with input/output streams:** allows using `cout << object` and `cin >> object`.
* **Enable type conversions:** defines how an object can be converted into another type.

---

## Practical examples

### Class `Complexo`

```cpp
class Complexo {
private:
  double re, im;

public:
  Complexo(double = 0, double = 0);
  ~Complexo() {}

  double get_real() { return re; }
  double get_imag() { return im; }

  // Operators
  friend Complexo operator+(Complexo &, Complexo &); // Addition
  Complexo operator-(Complexo &);                    // Subtraction

  friend ostream &operator<<(ostream &, const Complexo &); // Output
  friend istream &operator>>(istream &, Complexo &);       // Input

  operator int(); // Conversion to int
};
```

### Overloading the `+` operator

```cpp
Complexo operator+(Complexo &c1, Complexo &c2) {
  double r = c1.re + c2.re;
  double i = c1.im + c2.im;
  return Complexo(r, i);
}
```

Usage:

```cpp
Complexo a(1, 2), b(3, 4);
Complexo c = a + b; // intuitive addition
```

---

### Overloading the `-` operator

```cpp
Complexo Complexo::operator-(Complexo &c) {
  double r = re - c.get_real();
  double i = im - c.get_imag();
  return Complexo(r, i);
}
```

Usage:

```cpp
Complexo d = a - b;
```

---

### Overloading the stream operators `<<` and `>>`

```cpp
ostream &operator<<(ostream &out, const Complexo &c) {
  out << c.re << " + (" << c.im << ")i";
  return out;
}

istream &operator>>(istream &in, Complexo &c) {
  in >> c.re >> c.im;
  return in;
}
```

Usage:

```cpp
cin >> a;
cout << a;
```

---

### Overloading the conversion operator

```cpp
Complexo::operator int() {
  return sqrt(re * re + im * im);
}
```

Usage:

```cpp
int modulus = (int)a; // converts the complex number to its modulus
```

---

## Summary

Operator overloading:

* Allows the use of operators with class objects.
* Improves readability and makes objects behave more like native types.
* Can be implemented as a member function or as a `friend`.
* In the `Complexo` class example, the following were overloaded:

  * `+` (addition)
  * `-` (subtraction)
  * `<<` and `>>` (input and output streams)
  * Conversion to `int` (modulus of the complex number)

> :memo: **Note:** You can find more examples in here [Wikipedia](https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B)


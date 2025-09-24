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


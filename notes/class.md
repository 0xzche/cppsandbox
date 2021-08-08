Some notes on OOP in C++.


## Copy constructor ??

A copy constructor is called if:
(see [https://www.geeksforgeeks.org/copy-constructor-in-cpp/])

1. When an object of the class is returned by value. 
2. When an object of the class is passed (to a function) by value as an argument. 
3. When an object is constructed based on another object of the same class. 
4. When the compiler generates a temporary object.

However the number of times that the copy constructor is called can be reducec by [Return Value Optimization](https://en.wikipedia.org/wiki/Copy_elision#Return_value_optimization).

```C++
#include <iostream>

struct C {
  C() = default;
  C(const C&) { std::cout << "A copy was made.\n"; }
};

C f() {
  return C();
}

int main() {
  std::cout << "Hello World!\n";
  C obj = f();
}
```

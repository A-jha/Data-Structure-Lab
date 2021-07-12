# Overloading

in C ++ it is possible to define several functions with the same name, provided that the type of their arguments or the number of the arguments they take differ.

After classes, this is perhaps the next most important feature of C ++ .

## Pointers to overloaded functions

Sometimes it might be necessary to pass the address of an overloaded function to a pointer.

when passing a function as a parameter to another function. The way to tell C ++ which function’s address we would like to access is to include the list of parameters that the function takes into the definition of the pointer.

```C++
#include <iostream>
using namespace std;
void print(int i) { cout << "i = " << i << endl; }
void print(double a, double b) { cout << "a = " << a << ", b = " << b << endl; }
int main() {
    void (*p)(int) = print;
    void (*q)(double, double) = print;
    p(2);  //i = 2
    q(1.0,2.0); // a = 1.0  b = 2.0
    return 0;
}
```

## Overloading Constructors

a class needs a constructor for each way that an object of that class is declared in a program. In particular, when dynamically allocating memory for objects of a class, one has to define a default constructor that takes no arguments.

```C++
student *p;
p = new student[1]; // calls student::student();
p->print(); // ’unknown, unkown (YEAR 1)’
delete [] p;
```

## Operator Overloading

In C ++ , operators like `+, \*, <, >>, [] and ()` are just a very special type of functions.

However, when overloading operators some special rules apply. In particular, it is not possible to change the number of arguments an operator takes.

Furthermore, it is not possible to redefine an operator for the basic types.I.e. when overloading an operator at least one of its arguments must be a newly defined class (or enumeration).

Hence an overloaded operator never loses its original meaning.

Instead, it gains additional meaning relative to the class for which it is defined.

Furthermore,even if an operator is overloaded, it maintains its precedence over other operators and its associativity.

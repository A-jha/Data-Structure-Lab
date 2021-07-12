# Class and objects

Heroku@Avinash1997

## Class

A class is a building block of OOP and it is a user fefined datatype which can hold

- data member
- member function

Class is the blueprint of an Object.

When class is defined no memory is Allocated.

## Object

Objects are the basic run time entities in an object-oriented system.

- Object is an instance of a class.

When Object is instantiated then memory is allocated based on the blueprint/Class.

## Data Member

The members are by default hidden within the class and cannot be accessed from the
outside.the members of a class are declared private by default.

- if we want to, we can declare members of a class to be public.

```C++
class student {
public:
string name, firstname;
int year;
};
```

Nevertheless, it is somewhat **bad programming practice to declare member data to be public**. For a safe
and easy to update code one should always declare these as private.

## Member Function Of class / Methods

The function contained by Class is member function.

Member functions of a class are also referred to as **methods**.

```C++
class student {
string name, firstname;
int year;
public:
void create(const string &n, const string &fn, int y);
void print();
```

- Observe that the member data is declared private, since this is the default setting for a class.

```C++
void student::create(const string &n, const string &fn, int y) {
name = n; firstname = fn; year = y;
}

void student::print() {
cout << name << ", " << firstname << " (YEAR " << year << ")" << endl;
}
```

Remember the usage of the scope operator `: :` in order to define the member functions.

Here is an example of how to use the newly defined methods.

```C++
int main() {
student s1;
s1.create("Smith", "Alan", 1);
s1.print();
return 0;
}
```

The big advantage of defining all the member data as private is that

firstly we can easily trace an error if something goes wrong, since the only place where the data is changed is in some of the member functions.

And secondly, it is very easy to enrich and modify the class later on.

we could choose to include a variable address in the class. All we have to do in order to make sure that this new variable is always properly initialized in our program is to change the create method to something like :

````C++
void student::create(const string &n, const string &fn, int y) {
name = n; firstname = fn; year = y; address = "unknown";
}
``
- And may be another create method to init all 4 variable
```C++
void student::create(const string &n, const string &fn, int y, const string &a) {
name = n; firstname = fn; year = y; address = a;
}
````

## Constructor

C ++ allows to define a constructor function that is called each time an object of that class is created.

A constructor function has the **same name** as the class of which it is a part and has **no return type**.

```C++
class student {
string name, firstname;
int year;
public:
//constructor
student(const string &n = "unknown", const string &fn = "unkown", int y = 1) {
name = n; firstname = fn; year = y;
}
//methods
void print();
};
```

### Copy Constructor

A constructor that takes as its only argument an object of its own class is called copy constructor.

It is also used whenever a parameter is passed by value and when an object is returned by a function.

If there is no copy constructor defined for the class, C ++ uses the default built-in copy constructor, which creates a bit wise copy of the object. Hence one only needs to define this special constructor if the class has a pointer to dynamically allocated memory.

The declaration of the copy constructor in the case of the student class would have to look as follows.

```C++
class student {
public:
student(const student &s);
// etc
};
```

Observe that we have to pass the parameter by reference, since otherwise a copy of the argument would have to be made, which would invoke the copy constructor, for which another copy would have to be made . . . etc.

Note also that we used the keyword const to ensure that the argument is not changed inside the function.

## Destructors

The complement of a constructor is a destructor.

This function is called automatically whenever an object is destroyed, i.e. for local variables when they go out of scope and for global variables when the program ends. This special member function should **never be called explicitly.**

A destructor needs to be implemented only for classes that have a pointer to dynamically allocated memory, for all other classes the default destructor is sufficient.

The destructor function has the name of the class preceded with a ~.

It has no return type and takes no parameters.

```C++
class array {
double *a;
int len;
public:
array(int l = 0) { len = l; a = new double[len]; }
~array() { delete[] a; }
};
```

## The this pointer

C ++ contains a special pointer that is called this.

this is a pointer that is automatically passed to any member function when it is called, and it is a pointer to the object that generates the call.

E.g. given the statement foo.bar(), the function bar() is automatically passed a pointer to foo, which is the object that generates the call. This pointer is referred to as this

```C++
//all parms are automatically passed and accesed using this
void student::print() {
cout << this->name << ", " << this->firstname << " (YEAR " << this->year << ")" << endl;
}
```

The this pointer has several uses, including aiding in overloading operators.

## Keyword const

When passing objects by using the keyword const as a parameter to a function
that possibly calls some of the object’s member functions, one has to tell C ++ that these methods will not change the passed object. To do this one has to insert the keyword const in the method's declarations.

```C++
class myclass {
    int a;
public:
    void showvalues(const myclass &A) { this->print(); A.print(); }
    void print() const { cout << a << endl; } // const needed!
};
```

It is always advisable to use the keyword const for member functions that you as the programmer know will not change the object’s data.

## Classes inside Class

Apart from member data and member functions, classes can also define their own data types. These new class definitions, inside the given class, can then be used by the class’s member functions as well as from outside the class. In the latter case, one has to use the scope operator.

```C++
#include <iostream>
using namespace std;
class myclass {
    int a;
public:
    class local_type {
    double t;
public:
    local_type(double x) { t = x; }
    void print() const { cout << "Local type: " << t << endl; }
    };
    void print() const { cout << a << endl; }
};
int main() {
    myclass::local_type z(2.3);
    z.print();
    return 0;
}
```

Note that the same access restriction for member data and member functions also applies to classes defined inside other classes. I.e. these classes can only be used from outside the class in which they are defined, if they were declared as public.

## Friend functions

the programmer wants a function to have access to the private members of a class without that function actually being a member of that class. To this end, C ++ supports friend functions.

A friend is not a member of a class but still has access to its private elements. Since a friend function is neither private nor public, it can be declared anywhere in the class definition.

```C++
class classB;
class classA {
    int a;
    friend bool is_equal(const classA &, const classB &);
};
class classB {
    int b;
    friend bool is_equal(const classA &, const classB &);
};

bool is_equal(const classA &A, const classB &B) { return (A.a == B.b); }
```

As a general rule of thumb, use member functions where possible, and friend functions only where necessary.

In much the same way as you should make data and methods of your classes private where possible, and public where necessary.

## Friend Classes

In much the same way that we can make a (global) function a friend of a class, we can also declare another class to be a friend of a class.

This means that the member functions of the friend class are allowed to access also the private member data of the original class.

```c++
class classA {
   int a;
   friend class classB;
};
class classB {
   int b;
public:
   void convert(const classA &A) { b = A.a; }
};
```

## Header Files

In large programming projects it is often necessary to make use of header files.

Usually, the header file will include all the information, that other parts of the project need to know in order to use certain functions and classes.

Including a header file with the #include preprocessing directive, followed by the name of the header file in inverted commas, is like copying and pasting the contents of the header file into the C ++ source file.

```C++
Contents of "script_header.h"
#ifndef SCRIPT_HEADER_H
#define SCRIPT_HEADER_H

class A {
    int a;
public:
    A(int = 0);
    void print() const;
private:
    void check() const;
};
#endif // SCRIPT_HEADER_H
```

```C++
Contents of "script_header.cc"
#include <iostream>
#include "script_header.h"
using namespace std;

A::A(int i) { a = i; }
void A::print() const { cout << a << endl; check(); }
void A::check() const { if (a == 5) cout << "5!!" << endl; }

int main() {
    A x(2), y(5), z;
    x.print(); y.print(); z.print();
    return 0;
}
```

## Strings

- Header files for string

```C++
#include<string>
```

- Declare a string

```C++
 string f("Hello World");
```

- Print String

```C++
 cout<<"String f :"<<f<<endl;
```

- Length Of String

```C++
cout<< "String length : "<<f.length()<<endl;
```

- Append at the end of string

```C++
cout<<"String : "<<f.append("24x7")<<endl;
cout<<f<<endl;
```

- print substring

```C++
 cout<<"Substring : "<<f.substr(5,9)<<endl;
```

- Assign new string

```C++
 cout<<"changed string : "<<f.assign("gello")<<endl;
```

- Insert string and specify starting point

```C++
 //insert to string
 cout<<"new string after insertion :" <<f.insert(1,"bye ")<<endl;
 cout<<f<<endl;
}
```

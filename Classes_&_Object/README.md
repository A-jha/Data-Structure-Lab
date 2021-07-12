# Class and objects

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

# Pair

Pair is a container consist two data object:

- first element is refered as first and second elelment as second.
- order of first and second element is fixed.
- pair is in `utility.h` header file

- pair is by default initialized to 0

- intialize after declaring

```c++
pair<int int> PAIR1;
PAIR1.first = 10;
PAIR1.second = 100;
```

- intialized and declaration together

```C++
pair<string, int >PAIR2("Avi",4);
```

### make_pair()

- initialized using member function **make_pair()**

```C++
pair<string, double> PAIR3;

PAIR3 = make_pair("Avi",9.65);
```

### swap()

This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of same type.

```C++
pair1.swap(pair2);
```

### tie()

This function works the same as in tuples. It creates a tuple of lvalue references to its arguments i.e., to unpack the tuple (pair) values into separate variables.

```C++
tie(int &, int &) = pair1;
```

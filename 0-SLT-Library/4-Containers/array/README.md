# Array class in C++

## How it is better than simple array

- it knows iot's size
- Array class has no rist of pointer decay
- Array class are more efficient than normal array

```c++
#include<array>
#include<iostream>
using namespace std;

int main(){
    //declared
    array<int, 6> arr;
}
```

## Member function of array class

- **at( )** - access the element at

```c++
cout<< arr.at(0);
```

- **get( )** - access the element of the array

```c++
cout<< get<1>(arr);
```

- **[]** - like a[i]

- **front()** - This returns the first element of array.

- **back()** - This returns the last element of array.

- **size()** - It returns the number of elements in array. This is a property that C-style arrays lack.

- **max_size()** - It returns the maximum number of elements array can hold i.e, the size with which array is declared. The size() and max_size() return the same value.

- **swap()** - The swap() swaps all elements of one array with other.

- **empty()** - This function returns true when the array size is zero else returns false.

- **fill()** - This function is used to fill the entire array with a particular value.

```c++
array<int, 100> zarr;
zarr.fill(0);
```

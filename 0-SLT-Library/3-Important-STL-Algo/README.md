# Some Magical STL Algorithms

## Non-Manipulating Algorithms

1. sort()

- To sort the given vector

```C++
sort(first_item,last_item)
```

2. reverse()

- To reverse a vector.

```C++
reverse(first_iterator, last_iterator)
```

3. \*max_element()

- To find the maximum element of a vector.

```C++
*max_element(first_iterator, last_iterator)
```

4. \*min_element()

- To find the minimum element of a vector.

```C++
*min_element(first_iterator, last_iterator)
```

5. accumulation()

- Does the summation of vector elements

```C++
accumulate(first_iterator, last_iterator, initial_value of sum)
```

6. count()

- To count the occurrences of x in vector.

- Frequency of x

```C++
count(first_iterator, last_iterator, x);
```

7. find()

- Returns an iterator to the first occurence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.

```C++
find(first_iterator, last_iterator, x)
```

8. binary_search()

- Test whether X exist in sorted vector or not.

```c++
binary_search(first_iterator, lst_iterator, x)
```

9. lower_bound()

- returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.

```C++
//returns first occucance of x
 lower_bound(first_iterator, last_iterator, x)
```

10. upper_bound()

- returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.

```C++
//returns last occurance of x
upper_bound(first_iterator, last_iterator, x)
```

## Manupilating Algorithms

1. arr.earse()

- This erases selected element in vector and shifts and resizes the vector elements accordingly.

```C++
arr.erase(position to be deleted)
```

2. arr.erase(unique())

- This erases the duplicate occurrences in sorted vector in a single line.

```C++
arr.erase(unique(arr.begin(),arr.end()),arr.end())
```

3.  This modified the vector to its next permutation.

```C++
next_permutation(first_iterator, last_iterator);
```

4. This modified the vector to its previous permutation.

```C++
prev_permutation(first_iterator, last_iterator)
```

5. It returns the distance of desired position from the first iterator.This function is very useful while finding the index.

```C++
distance(first_iterator, last_iterator)
```

# Array algorithms in C++ STL

1. all_of()

- This function operates on whole range of array elements and can save time to run a loop to check each elements one by one.
- It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false.

```C++
// C++ code to demonstrate working of all_of()
#include<iostream>
#include<algorithm> // for all_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};

    // Checking if all elements are positive
    all_of(ar, ar+6, [](int x) { return x>0; })?
          cout << "All are positive elements" :
          cout << "All are not positive elements";

    return 0;

}
```

2. any_of()

- This function checks for a given range if there’s even one element satisfying a given property mentioned in function.
- Returns true if at least one element satisfies the property else returns false.

```C++
#include<iostream>
#include<algorithm> // for any_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};

    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";

    return 0;

}
```

3. none_of()

- This function returns true if none of elements satisfies the given condition else returns false.

```C++
#include<iostream>
#include<algorithm> // for none_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};

    // Checking if no element is negative
    none_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "No negative elements" :
          cout << "There are negative elements";

    return 0;
}
```

4. copy_n()

- copy_n() copies one array elements to new array. This type of copy creates a deep copy of array.
- This function takes 3 arguments, source array name, size of array and the target array name.

```C++
#include<iostream>
#include<algorithm> // for copy_n()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};

    // Declaring second array
    int ar1[6];

    // Using copy_n() to copy contents
    copy_n(ar, 6, ar1);

    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
       cout << ar1[i] << " ";

    return 0;

}
```

5. iota()

- This function is used to assign continuous values to array. This function accepts 3 arguments, the array name, size, and the starting number.

```C++
#include<iostream>
#include<numeric> // for iota()
using namespace std;
int main()
{
    // Initializing array with 0 values
    int ar[6] =  {0};

    // Using iota() to assign values
    iota(ar, ar+6, 20);

    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << ar[i] << " ";

    return 0;

}
```

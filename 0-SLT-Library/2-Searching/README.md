# Binary Search in C++ Standard Template Library (STL)

Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found, or all the elements are exhausted.

It works by comparing the middle item of the array with our target, if it matches, it returns true otherwise if the middle term is greater than the target, the search is performed in the left sub-array.

If the middle term is less than the target, the search is performed in the right sub-array.

## CPP program to implement Binary Search in Standard Template Library (STL)

```C++
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);

    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    return 0;
}
```

```output
The array is :
1,5,8,9,6,7,3,4,2,0,

Let's say we want to search for
2 in the array So, we first sort the array

The array after sorting is :
0,1,2,3,4,5,6,7,8,9,

Now, we do the binary search
Element found in the array

Now, say we want to search for 10
Element not found in the array
```

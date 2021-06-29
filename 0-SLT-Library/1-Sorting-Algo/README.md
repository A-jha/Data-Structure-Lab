# Sorting in C++ STL

By default, it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N\*logN time, it switches to HeapSort and when the array size becomes really small, it switches to InsertionSort.

```C++
// C++ progrma to sort an array
#include <algorithm>
#include <iostream>
using namespace std;

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}
// Driver code
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    // size of the array
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "The array before sorting is : \n";

    // print the array
    show(a, asize);

      // sort the array
    sort(a, a + asize);

    cout << "\n\nThe array after sorting is :\n";

    // print the array after sorting
    show(a, asize);

    return 0;
}
```

```Output
The array before sorting is :
1 5 8 9 6 7 3 4 2 0

The array after sorting is :
0 1 2 3 4 5 6 7 8 9
```

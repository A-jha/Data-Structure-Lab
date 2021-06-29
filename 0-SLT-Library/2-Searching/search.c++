#include <algorithm>
#include <iostream>
using namespace std;
void show(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    int a[] = {1,
               5,
               8,
               4,
               2,
               9,
               12,
               11,
               0,
               16,
               13};

    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe Array is\n";
    show(a, asize);

    // before searching sort the array
    sort(a, a + asize);
    show(a, asize);
    //search 2
    if (binary_search(a, a + asize, 2))
    {
        cout << "\nElement is present";
    }
}
/*
The Array is
1       5       8       4       2       9       12      11      0       16      13      

0       1       2   45       8       9       11      12      13      16
Element is present
*/
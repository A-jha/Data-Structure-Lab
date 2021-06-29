#include <algorithm>
#include <iostream>
using namespace std;

void show(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    int a[] = {1, 4, 9, 2, 5, 22, 12, 6, 7, 55};

    //1. find the size of array
    int size = sizeof(a) / sizeof(a[0]);
    printf("\nArray before sorting : \n");
    show(a, size);
    sort(a, a + size);
    printf("\nArray after sorting :\n");
    show(a, size);
    return 0;
}

/*
Array before sorting : 
1       4       9       2       5       22      12      6       7       55
Array after sorting :
1       2       4       5       6       7       9       12      22      55 
*/
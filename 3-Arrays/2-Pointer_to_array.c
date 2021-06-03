#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }
}
//---> Output: 1    2   3   4   5

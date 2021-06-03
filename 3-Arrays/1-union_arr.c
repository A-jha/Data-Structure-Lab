#include <stdio.h>

//1. Size of union datatype array
// union A
// {
//     char p;
//     float *const q;
// };
// int main()
// {
//     union A arr[10];
//     printf("%ld", sizeof(arr));
//     return 0;
// }
//---> 80
// Here 'Union' is used to create the user defined datatype.
// sizeof A is 8 and 8*10 = 80

//2. Size of structure array
typedef struct student
{
    char *name;
    int roll;
} s;
int main()
{
    s arr[2];
    arr[1].name = "Aviansh jha";
    arr[1].roll = 2;
    arr[0].name = "Arpita";
    arr[0].roll = 3;
    printf("%ld", sizeof(arr));
}
//----> 32
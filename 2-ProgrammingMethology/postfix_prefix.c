#include <stdio.h>

//1.Difference between prefix and postfix operator
// int main()
// {
//     int a = 10;
//     int b = ++a;
//     int c = a++;
//     printf("prefix : %d and postfix : %d", b, c);
// }
//output: prefix : 11 and postfix : 11
// b is assigned as a+1
// c is assigned as a then a becomes a+1

//2.precedence of prefix and dereference are same
// int main()
// {
//     char arr[] = "Avinash";
//     char *p = arr;
//     ++*p;
//     printf(" %c", *p);
// }
//output:B
//in this case both have same precedence hence
//*p = A and ++A is B

//3.dereference and postfix
int main()
{
    char arr[] = "Avinash";
    char *p = arr;
    printf("%c", *(p + 1)); //v
    *p++;
    printf("%c", *p); //v
}
//Output: v
//in this case *p = A and then *p = *(p+1)
# Programming Methodology

## Data Segment In Memory

The running program stored the machine instructions and data in the same memory space.

- The Memory is logically divided into text and data segment.

- A single text segment is used by modern systems to store program instructions, but to store data need more than one segment.

### Text Segement :

- Text Segemnt contains machine code of the compiled program.
- Text segment are often read only files.
- text segment are frequently shared.

### Initialized Data Segment :

- Initialized data segment store global , static , constant , and variable with extern keyword.
- These data segement are not read only.

![memory_segement](../images/memory_segement.png)

```C
#include<stdio.h>
// Global variable stored in initialized segment in r/w area
char c[] = "Avinash";

//global var stored in nitialized data segment read only area
const char p[] = "Happy guy";

int main(){
   //static variable stored in initialized data segment
    static int a = 21;

}
```

### Uninitialized Data Segement (bss) :

- In this segment data is initialized to 0 before program starts executing.
- unintialized data segement starts at the end of data segement and contains all global and static variable.

```C
#include<stdio.h>
char c; /* uninitialize var stored in basic bss */
int main(){
    static int i; /* uninitialized static var stored in bss */
}
```

### Heap :

- Heap segement is used for dyanamic memory allocation.
- Heap segment is shared by all shared libraries and dynamically loaded modules in the program.

```C
//Memory allocating in heap
char *p = (char*) malloc(sizeof(char));
```

### Stack :

- Stack segement is used to store all local var and is used for passing arguments to the functions along with the return address of the instruction which is to be executed after the function is over.

| Code               | solution              |
| ------------------ | --------------------- |
| int i;             | Output:5 6 7          |
| for(i=0;i<3;i++>){ | First iteration a =5  |
| static int a =5;   | second iteration a =6 |
| printf("%d",a++);  | third iteration a =7  |
| }                  |

## Scope Of variable

- In a program scope is the maximum size in which no binding changes.

### static scoping :

- THe determination of scope is done at a time of compilation.

### Dynamic scoping :

- Do not normally have type check at compile time.

## Bitwise operator in C

- & (bitwise AND)

  | 11   | 1 0 1 1 |
  | ---- | ------- |
  | & 12 | 1 1 0 0 |
  | 8    | 1 0 0 0 |

- | (Bitwise OR)

  | 11   | 1 0 1 1 |
  | ---- | ------- |
  | I 12 | 1 1 0 0 |
  | 15   | 1 1 1 1 |

- ^ (Bitwise XOR)
  | 11 | 1 0 1 1 |
  | ---- | ------- |
  | ^ 12 | 1 1 0 0 |
  | 7 | 0 1 1 1 |

  - result of XOR is 1 if two bits are different.

- `<<` (left shift)

  - in other words left shifting an integer `x` with an integer `y` denoted as
    `(x<<y)` is equivalent to multiplying x with `2^y` (2 raised to power y).
    | 11 | 1 0 1 1 |
    | ---- | ------- |
    | << 1 |  
    | 22 | 1 0 1 1 0 |

- `>>`(right shift)

  - n other words right shifting an integer `x` with an integer `y` denoted as `(x>>y)` is equivalent to dividing x with `2^y`.
    | 11 | 1 0 1 1 |
    | ---- | ------- |
    | >> 1 |  
    | 5 | 0 1 0 1 |

- ~ (Bitwise NOT)
  | ~ 11 | 1 0 1 1 |
  | ---- | ------- |  
   | 8 | 0 1 0 0 |

### Some Important points about Bitwise operator

- left shift and right shift should not be used for negetive number.

- if number is shifted morethan the sixe of integer then the result is undefined
- Bitwise operators are not logiacl operators.
- The left shift is eqivalent to multiplication of 2
- the right shift is eqivalent to division of 2
- The & operator is used to check if number is even of odd.

  - if x & 1 != 0 then x is odd
  - if x & 1 == 0 then x is even

| Category       | Operator                          | Associativity |
| -------------- | --------------------------------- | ------------- |
| Postfix        | () [] -> . ++ - -                 | Left to right |
| Unary          | + - ! ~ ++ - - (type)\* & sizeof  | Right to left |
| Multiplicative | \* / %                            | Left to right |
| Additive       | + -                               | Left to right |
| Shift          | << >>                             | Left to right |
| Relational     | < <= > >=                         | Left to right |
| Equality       | == !=                             | Left to right |
| Bitwise AND    | &                                 | Left to right |
| Bitwise XOR    | ^                                 | Left to right |
| Bitwise OR     |                                   | Left to right |
| Logical AND    | &&                                | Left to right |
| Logical OR     | II                                | Left to right |
| Conditional    | ?:                                | Right to left |
| Assignment     | = += -= \*= /= %=>>= <<= &= ^= I= | Right to left |
| Comma          | ,                                 | Left to right |

## Short circuit in logical operator

- In case of logical AND, the second oprand is not evaluated if first operand is false.
- In case of logical or second operand is not evaluated if first operand is true.

## Address arithmatic in C

- We can subtract address of any two variable.
- We can not `+, \, *,` two address.
- We can not +,- an int to an address.
- operators use in address
  - !
  - sizeof
  - Type casting (Type)
  - Logical operator

```C
int a, b;
int c = &a - &b
```

suppose address of a =5000 and address of b = 1000
According to solution 5000 -1000 = 4000

## Value of variable in C

### LValue

- LValue stands for left vale.
- LValue must be a container which have ability to hold data.

### RValue

- Rvalue stands for right value.
- RValue can be a constant, variable, functions which is returning value.

## Break and Continue

### Break

- Task of this keyworf is to bring the control out of the loop in case of looping.
- Break keyworf switch the control from one case to anothercase of switch case control system.

### Continue

- It transfers the control of program at the begining og the loop.
- continue can only be used in loop.

## Const Qualifier

The qualifier const can be applied to the declaration of any variable to specify that **its value will not be changed.**

- **_Pointer to Variable_**

  ```C++
  int *ptr;
  ```

The value of the pointer ptr as well as value of object ptr pointing to can be changed.

- Poineter and value pointed by pointer both are stored in read-write area.

```C++
int i =15;
int j =20;
int *ptr = &i;
printf("*ptr: %d\n",*ptr);
ptr = &j;
printf("*ptr: %d\n",*ptr);
*ptr = 200;
printf("*ptr: %d\n",*ptr);
```

Output:

\*ptr: 15

\*ptr: 20

\*ptr: 200

- **_Pointer To Constant_**

```C++
const int *ptr;
    //or
int const *ptr;
```

The pointer can be changed to point to any other integer variable, but cannot change value of object(entity) pointed using ptr.

- Pointer is stored in read-write area.
- Object pointed may be in read only or read-write area.

```C
int i =15;
int j =20;
const int *ptr = &i;
printf("ptr: %d\n",*ptr);
*ptr = 200;
ptr = &j;
printf("ptr: %d\n",*ptr);
```

**Otput:**

error:assignment of read-only location '\*ptr'

## String in C

In C, a string can be refered either using a charecter pointer or as a charecter array.

### 1. String as character arrays:

```C
char ptr[] = "string";
```

- Representation of string

| char ptr[] = | s   | t   | r   | i   | n   | g   | \0  |
| ------------ | --- | --- | --- | --- | --- | --- | --- |

- \0 is a string terminator.
- when string is declared as char arrays, it is stored like other type of arrays in C i.e.
  - if ptr[] is an auto variable then string is stored in stack segment.
  - if its global or static variable then stored in data segment.

### 2. String Using Charecter Pointer

Using chapointer sting can be stored in two ways.

1. Read only string in a shared segment: When string value is directly assigned to a pointer.

   ```C
   char *ptr = "string";
   ```

2. Dynamically allocated in heap segment: String are stored like other dynamically allocated things in C.
   ```C
   char *ptr;
   int length = 7;
   ptr = (char*) malloc(sizeof(char)*length);
   *(ptr+0) = 's';
   *(ptr+1) = 't';
   *(ptr+2) = 'r';
   *(ptr+3) = 'i';
   *(ptr+4) = 'n';
   *(ptr+5) = 'g';
   *(ptr+6) = '\0';
   ```

## Function

A large program is divided into basic building blocks called function.

- Function contains set of instructions enclosed by "{ }" which perform specific operation in a program.

**Uses of function :**

- reduce code redundancy.
- easy to read.
- Reusable

**Three aspects of C function :**
|Aspects|Syntax|
|-------|------|
|function definition|return_type func_name(arguments) {Body}|
|function call| func_name(arguments);|
|function declaration| return_type func_name(arguments);

## Library Function

- Only one value can be retirned from the function.
- if you want to return more than one value pointers can be used to directly change the value address instead of value.
- Library functions are declared in header files.
- some Header files are

| Header File | Description                                                   |
| ----------- | ------------------------------------------------------------- |
| stdio.h     | std i/o head file where i/o functions are declared            |
| conio.h     | console i/o head file                                         |
| string.h    | string related functions                                      |
| stdlib.h    | all memory rleated and general functions are delclared in it. |
| math.h      | math related function                                         |
| time.h      | time and clock releted functions                              |
| ctype.h     | all charecter handling function are defined                   |
| signal.h    | signal handling functions are declared                        |
| errno.h     | error handling functions                                      |
| assert.h    | contains diagnostics function                                 |

**Some Important Points :**

- each c Program contains main function.
- execution of c program starts in main function.
- name of function is unique in C program.
- C functions can be invoked any where within C program.
- one function can be called within another function.
- function may or may not take args.
- function may or may not return.
- C function can return only one value to the calling function.
- there are two types of function
  1. Library function
  2. User defined function

## Call By Value

- in Call by value method, the value of the variable is passed to the function as prams.
- The value of actual prams can not be modified by formal prams.
- Different memory is allocated for both actual and formal prams.Because, value of actual prameter is copied to formal prameter.

```C
#include<stdio.h>
//function declaration
void swap(int x, int y);
int main(){
  int m =22, n =44;
  //fuction call
  swap(m,n);
}
//function definition
void swap(int x, int y){
  int temp = x;
  x= y;
  y=temp;
  free(temp);
}
```

Output:

The values before swap a = 22 and b = 44

The value after swap a = 22 and b = 44

**Actual Prameter:** - This is the args used in function call.

```C
sum(3,4);
```

**Formal Prameter:**- This is the args used in function definition.

```C
void sum(int x,int y){x = x+y;}
```

## Call By Reference

- In call by reference method, the address of the args are passed to the function.
- the value of actual parameters can be modified by formal parameters.
- Same Memory is used for both actual and formal parameters since only address is used by both prameters.

```C
#include<stdio.h>
//function prototype
void swap(int *a, int *b);

int main(){
  int m =22;
  int n =44;
  //calling function
  swap(&m,&n);
}
void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
```

Output:

Before : Value of m = 22 and n = 44

After : value of m =44 and n =22

## Recursion

Any function which calls itself is called recursion.

- Recursion is a usefull technique borrowed from mathematics.
- Recursice code are sorter and easier.

Example: Factorial of any number

n! = 1 if n==0

n ! = n \* (n-1) ! if n>0

```C
int fact(int n){
  if(n==0){
    return 1;
  }else if(n>0){
    return (n*fact(n-1));
  }
}
```

### Recursive Algorithms TODO

- Fibonacci Series, Factorial Finding
- Merge Sort, Quick Sort
- Binary Search tree
- Tree Traversal and many tree problem
  - in order
  - pre order
  - post order
- Graph traversal
  - DFS
  - BFS
- Dyanamic Programming
- Divide and Conquer Algorithms
- Tower of Hanoi
- Backtracking algorithm

## Backtracking

Bqcktracking is the method of exhaustive search using divide and conquer.

- Sometime the best algo for a prob is to try all possiblities.
- It is a slow process.

### Backtracking Algoriths TODO

- Binary string
- Generating k-ary String
- The knapsack problem
- Generalized String
- Hamitonian cycle
- Graph Coloring Problem

## C scope Rules

A scope in a programming language is a region of the program where a defined variable can have its existance and beyond that, variable can not be accessed.

### Local Variable

Variable that are declared inside a function or block are called local variable.

```C
int main(){
  int a,b,c;/*Loacal variable declaration*/
}
```

### Global Variable

Global variable are defined outside the function.

- The global variable will hold memory throughout the program lifetime.

- global variable is available throughout the program.

```C
#include<stdio.h>
int g;//global variable
int main(){
  g =10;
}
```

- A program can have same name for local and global variable but value of local variable inside a function takes preference.

```C
int g = 20;
int main(){
  int g = 10;
  printf("g = %d",g);
}
```

Output: g = 10

### Block Scope

A block is a set of stetments which is enclosed within { }.

- A variable which is declared in ablock is accesible in the block and all inner block of that block, but no access to outside block.

- if inner block declare a var of same name as of outer block then the availablily of outer block var is stoped for that inner block.

```C
int main(){
  {
    int a= 10,b=20,c=30;
    {
      a =20;
      b=30;
      int c =40;
    }
    printf("a = %d , b = %d and c = %d",a,b,c );
  }
}
```

- Here c = 30 because as we declare a var with same nae as of outer var than the availablity of outer var ends.
  Output: a = 20 , b = 30 and c= 30

### Formal Parameters

Function parameters, which are known as formal parameters, are treated as local variable within that function and give preference over the global variable.

```C
#include<stdion.h>
int a = 20;
int main(){
  printf("value of global a is %d",a);
  int a = 10;
  int b = 20;
  int c = 0;
  printf("value of a  in main() is %d" , a);
  c = sum(a+b);
  printf("value of c in main() = %d",c);
}
int sum(int a, int b){
  printf("value of a in sum() is %d",a);
  return a+b;
}
```

Output:

value of global a =20

value of a in main() is 10

value of a in sum() is 10

value of c in main() is 30

## Storage Class

The storage class of a variable in C determines the lifetime of the variable if this is 'global' or 'local'.

Storage class which can be used in C program

- Auto
- Register
- static
- Extern

### Auto Storage Class

A variable defined within a function or block with auto specifer belogs to automatic storage class.

All variable defined within a function or block by default belong to automatic storage class.

auto varible are automatically distroyed after program execution.

#### Properties of auto storage class

- default initial value is garbage.
- visiblity of auto variable is within block.
- auto variable get memory at run time.

### Register Storage class

You can use the register storage class when you want to store local variables within functions or blocks in CPU registers instead of RAM to have quick access to these variables. For example, "counters" are a good candidate to be stored in the register.

#### Properties of register Storage Class

- Register variable executes faster than the other variables becuse it is stored in CPU so during the execution compilrer has no extra burden to bring variable from memory to CPU.
- Since CPU has limited number of registers so it is the responsiblity of programmer to use it resposibly.
- most frequent variables are stored in register.
- we can not dereference register variable as it is stored in CPU hence no memory address.
- scope and visiblity of register variable is block.

```C
#include<stdio.h>
int main(){
  register int a =10;
  int *ptr;
  p = &a;
  printf("%u",p);
}
```

Output: Compilation error

Here we are trying to refernce a register variable which gave a compilation error.

### Static Storage class

Unlike global variable static variables are not visible outside the block but it maintain their values between calls.

when static specifier is applied to a local variable then the compiler creates a permanent storage for it.

A static local variable is local variable is local variable that retains its value between function calls.

#### Properties of Static Sorage Class

- It is not default storage class for global variable.
- Default initial value is 0 or null.
- A static variable can be declared many time but initialized only once.
- We can not write any assignment statement globally.
- static variable initialize only one time in whole program.
- if we declare static variable locally then it is visible within the block where it is declared.

```C
for(int i=0;i< 5;i++){
  static int a =10;
  print("%d\t",a);
  a++;
}
```

Output: 10 11 12 13 14

### External Storage class

The extern specifier gives the declared variable external storage class.

When extern specifier is used with a variable declaration then no storage is allocated to that variable and it is assumed that the variable has already been defined elsewhere in program.

When we use extern specifier the variable can not be initialized because with extern specifier varible is declared not defined.

```C
extern int  i = 10;
int main(){
 printf("%d",i);
}
```

Output: 10

- Here we initialized varible with extern keyword so it will not give any error

```C
int main(){
  extern int i=10;
}
```

Output: Compilation error. can not initialize extern variable.

```C
int main(){
  extern int i;//declared
  printf("%d",i);
}
extern int i =20;
```

Output: 20

- Here we declare variable extern then it searches the variable either it has been initialized or not. it it has been initialized which may be either extern or static then its okay otherwise compilation error.

## Precedence of Postfix(++) and (++)prefix in C/C++

Precedence of prefix ++ (or prefix --) and derefernce(\*) operator is same.

precedence of prefix is higher than postfix operator.

```C
int a =10;
int b = a++;//10 then a = 11
int c = ++a;// a=a+1 then 12
```

```C
*p = arr;
++*p;//*p = *p+1
*p++;//*p = *(p+1)
```

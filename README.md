# Question Based On Stack

## 1. Reverse a string using Stack

String is a stack of characters.

```
+-----+-----+-----+-----+-----+-----+
|  H  |  E  |  L  |  L  |  O  |  \0 |
+-----+-----+-----+-----+-----+-----+
```

Logic:

- Create a stack and push each charecter into stack
- Bottom of stack contains H and top will contain 0
- then pop each element and replace the index 0 to end

EasyWay

- Use C++ Stl Library's Stack to implement

> Time Complexity - O(n)

> Space Complexity - O(n)

## 2. Reverse A Linklist using Stack

Linklist consist of two part one is data and other is address/pointer to next node.

Logic:

- We will Store address pointer of each node into stack and then reverse the link.

## 3. Check for balanced parentheses

- Performed by Compiler

Corresponding to each opening parentheses we should have a closing parentheses.

```
[{2 + 2 (3 * 6 )}] --> This is balanced

[2+3(4 * 5)}] --> this is unbalnced
```

## 4. Infix, Postfix, Prefix

### Infix

> <Operand\> <Operator\> <Operand\>

```
 Ex :
   ---2 + 3

   ---A - B

   ---(P * 2)

   ---(2 * 3) * 4

   ---(p + q) * (r + s)
```

Order Of Operation in infix evaluation

1. Parentheses ( ) { } [ ]

2. Exponent -- right to left
   ```
   <-----------------
   2^3^2 = 2^9 = 512
   -------------------
   2^3^2 = 8^2 = 64
   -----------------> Which is wrong
   ```
3. Multiplication and Division -- left to right

4. Addition and Subtraction -- left to right
   ```
   --------------------->
   4 - 2 + 1 = 2 + 1 = 3
   ---------------------
   4 - 2 + 1 = 4 - 3 = 1
   <--------------------- Which is Wrong
   ```

Eaxample:

```
2 * 6 / 2 -3 + 7

12 / 2 - 3 + 7

6 - 3 + 7

3 + 7

10
```

In infix we have to follow mutilpe rules to parse and evaluate the data so to overcome these problems mathmaticians comes with some solutions i.e postfix evaluation and prefix evaluation.

### Prefix (Polish Notation)

> <operator\> <oprand\> <oprand\>

| Infix      | Prefix |
| ---------- | ------ |
| a + b      | + a b  |
| p - q      | - p q  |
| a + b \* c | +a\*bc |

## 5. Evaluation of Prefix

```
Infix : {(2 * 3) + (5 * 4)} -9

     =>  (*23 + *54) -9

     =>  +*23*54 - 9

Postfix : -+*23*549

1. Scan postfix expression from Right to left

```

### Postfix (Reverse Polish Notation)

- Easiest to parse and most efficient

> <oprand\> <operand\> <operator\>

| Infix      | Post   |
| ---------- | ------ |
| a + b      | a b +  |
| p - q      | p q -  |
| a + b \* c | abc\*+ |

## 6. Evaluation of Postfix

```
Infix: A * B - C * d - e

{(A * b) - (c * d) }  -e

{(AB*) - (CD*)} -e

{AB*CD*-}-e

Postfix : AB*CD-e-

Noiw we have A = 2 B= 3 C = 5 D = 4 e = 9 evaluate postfix

postfix : 23*54-9-

1. Scan the expression from left to right
   - for first operator the preceding two will be the operand
      2 3 * then 2 and 3 are oprand for first operator * apply operator

      Postfix : 654*-9- ( 2 3 * ---> 6)

      Postfix : 620-9- (5 4 * ---> 20)

      Postfix: -149- ( 6 20 - ---> -14)

      Postfix: -23 ( -14 9 - ---> -23)
```

## 7. Infix To Postfix

Step1 : Scan from Left to Right

Step2: If Operrand comes then printit

Step3: If lower predence operator comes then pop hiegher precedence oprator first
if stack contains \* then + comes then \* will pop

Step4: In the case of parenthesis for each opening parentheses if we encounter closing parentheses then we will pop operator until we get corresponding opening parentheses.

```
Example: ((A + B) * C - D) * E

Step 1: Scan from Left to right
Stack <---- (
Stack <---- ( (
Stack <---- ( (        Output: A
Stack <---- ( ( +      Output: A
Stack <---- ( ( +      Output: AB
Stack <---- ( ( + )    Output: AB here we get closing
Stack <---- (          Output: AB+
Stack <---- ( *        Output: AB+
Stack <---- ( *        Output: AB+C
Stack <---- ( -      Output: AB+C* <--- if h-pop
Stack <---- ( -      Output: AB+C*D
Stack <---- ( - )    Output: AB+C*D here closing
Stack <----            Output: AB+C*D-
Stack <---- *          Output: AB+C*D-
Stack <---- *          Output: AB+C*D-E
Stack <----            Output: AB+C*D-E* <-- final
```

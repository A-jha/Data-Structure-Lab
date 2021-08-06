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

## Infix, Postfix, Prefix

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

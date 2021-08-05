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

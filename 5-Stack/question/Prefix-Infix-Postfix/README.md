### Operator Precedence

| S.No | Operator | Associativity   |
| ---- | -------- | --------------- |
| 1,   | ( ),     | Left to Right   |
| 2,   | [ ],     | Left to Right   |
| 3,   | .,       | Left to Right   |
| 4,   | ->,      | Left to Right   |
| 5,   | ++ --,   | Left to Right   |
| 6,   | ++ --,   | Right to Left   |
| 7,   | + -,     | Right to Left   |
| 8,   | ! ~,     | Right to Left   |
| 9,   | (type),  | Right to Left   |
| 10,  | \_,      | Right to Left   |
| 11,  | &,       | Right to Left   |
| 12,  | sizeof,  | Right to Left   |
| 13,  | \_ / %,  | Left to Right   |
| 14,  | + -,     | Left to Right   |
| 15,  | << >>,   | Left to Right   |
| 16,  | < <=,    | Left to Right   |
| 17,  | > >=,    | Left to Right   |
| 18,  | == !=,   | Left to Right   |
| 19,  | &,       | Left to Right   |
| 20,  | ^,       | Left to Right   |
| 21,  |          | ,Left to Right  |
| 22,  | &&,      | Left to Right   |
| 23,  | ll,      | ,Left to Right  |
| 24,  | ? :,     | Right to Left   |
| 25,  | =,       | Right to Left   |
| 26,  | += -=,   | Right to Left   |
| 27,  | \*= /=,  | Right to Left   |
| 28,  | %= &=,   | Right to Left   |
| 29,  | ^=       | =,Right to Left |
| 30,  | <<= >>=, | Right to Left   |
| 31,  | ",",     | Left to Right   |

<br/>

# Infix to Postfix

```
//infix expression
a + b

//prefix expression
+ab

//postfix expression
ab+
```

## Algorith to find Infix to Postfix

- Step 1: Scan infix expression left to right.

- step 2 : If scan token is oprand output it.
- step 3: If scanned token is an operator then

  1.  _If_ prcedence of scanned token is greater than the precedence of operator present in the stack (or stack is empty) then push the operator.

  2.  _Else_ if precence of scaned token is less than the precedence of operator present in the stack then pop all the operators from the stack that are greater or equal in precedence then that of the scanned token. After that push token to stack.

- Step 4 : If scanned token is **'('** push it into stack.
- step 5 : If scanned character is **')'** pop from stack until **'('** encounter.

- Step 6 : Repeat step 2 to step 6 until expression is scanned.
- step 7 : pop and output from the stack untill it is not empty.

### Example ( ( A + B ) — C \* ( D / E ) ) + F to Postfix

| Move | Token | Stack                  | Postfix        |
| ---- | ----- | ---------------------- | -------------- |
| 1.   | (     | (                      | --             |
| 2.   | (     | ( (                    | --             |
| 3.   | A     | ( (                    | A              |
| 4.   | +     | ( ( +                  | A              |
| 5.   | B     | ( ( +                  | AB             |
| 6.   | )     | ( ( + ) -->(           | AB+            |
| 7.   | -     | ( -                    | AB+            |
| 8.   | C     | ( -                    | AB+C           |
| 9.   | \*    | ( - \*                 | AB+C           |
| 10.  | (     | ( - \* (               | AB+C           |
| 11.  | D     | ( - \* (               | AB+CD          |
| 12.  | \     | ( - \* ( \             | AB+CD          |
| 13.  | E     | ( - \* ( \             | AB+CDE         |
| 14.  | )     | ( - \* ( \ )--> ( - \* | AB+CDE\        |
| 15.  | )     | ( - \* )               | AB+CDE\* -     |
| 16.  | +     | +                      | AB+CDE\* -     |
| 17.  | F     | +                      | AB+CDE\* - F   |
| 18.  | --    | --                     | AB+CDE\* - F + |

# Stack

A stack is an ordered list in which all insertions and deletions are made at one end, called the **top**.

- Last In First Out List

## Operation On stack

- Push : To add an element to the stack.
- Pop : To remove element from the stack.
- Peek : To look at element without removing them.
- LIFO

### Visual Representation of stack

![Push-Pop](push-pop.png)

### Consider the stack With following details

| Field                            | Value |
| -------------------------------- | ----- |
| Size of stack                    | 6     |
| Max value/index of stack top     | 5     |
| Minimum index of stack           | 0     |
| value of top when stack is empty | -1    |
| Value of top when stack is full  | 5     |

## PUSH OPERATION

- Adding element into the TOP of stack

- PUSH is a two step process
  - Increse top
  - add element on top
- Before PUSH always check if stack is full or not
- If stack is full then if we PUSH then it causes Stack Overflow.

```
procedure push(item:items);
{
    add item to the global stack,
    top is current top of stack,
    n is maximum size of the stack
}

begin:
    if top = n then stack is full and return
    else
        top  = top+1
        stack[top] = item
end:{of push}
```

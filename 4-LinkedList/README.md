# Linked List

A linked list a data stucture to overcome the limitations of array.

> Linked list can grow as per need

### Representation of LL

```
     Head
+-----+------+   +---+-----+   +----+----+
|  1  |  124 |-->| 4 | 248 |-->| 7  |  0 |--->NULL
+-----+------+   +---+-----+   +----+----+
 100              124           248
```

### Structure of LL

```C++
struct Node
{
    int data;//4 byte
    Node* next;//--> address of the head node gives us access to the complete list
}
```

### Time Complexity

- Access : O(n)
- Insertion : O(n)
- Delete : O(n)

### Array Vs Linked List

|                     | Array                                              | Linked List                                           |
| ------------------- | -------------------------------------------------- | ----------------------------------------------------- |
| Cost of access      | O(1)                                               | O(n)                                                  |
| Memory Requirements | Fixed Size<br>Unused memory                        | No Unused memory<br>Extra memory for pointer variable |
| cost of insertion   | begining: O(n)<br>end : O(1)<br>n-th position:O(n) | begining : O(1) <br> end :O(n)<br> n-th position:O(n) |
| Easy to Use         | Easy                                               | More Prone to error                                   |

# Doubly Link List

### Structure of DLL

```c++
class Node
{
    int data;
    Node *next;
    Node *prev;

public:
    void setData(int a)
    {
        data = a;
    }
    int getData()
    {
        return data;
    }
    void setNext(Node *a)
    {
        next = a;
    }
    Node *getNext()
    {
        return next;
    }
    void setPrev(Node *a)
    {
        prev = a;
    }
    Node *getPrev()
    {
        return prev;
    }
};
```

```
                +---------------+-------+
                |       |       |       |
Prev pointer<---|-----  | data  |   ----|---->Next Pointer
                |       |       |       |
                +-------+-------+-------+
```

## Advantage of Doubly Linked List

- Reverse Lookup

```
         +---+---+---+     +---+---+     +---+---+
         |   |   |   |<----|   |   |<----|   |   |
null <---| 0 |   |600|     |400|800|     |600| 0 |---->nulptr
         |   |   |   |---->|   |   |---->|   |   |
         +---+---+---+     +---+---+     +---+---+
            400           600            800
```

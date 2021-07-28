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

## Insertion At Begining

> It is 4 Step process:

1.  Create a new Node
2.  Put in data in Node
3.  Make next of new Node as head
4.  Now assign new Node as head

![insertion-at-begining](../images/llinsertion1.png)

```c++
void push(int data)
{
    //1. create a new node
    Node *new_node = new Node();
    //2. add data to the node
    new_node->setData(data);
    //3.set next of new_node as head
    new_node->setNext(head);
    //set new_node as head
    head = new_node;
}
```

## Insertion At end

> It is a 5 step process

1. Allocate new Node
2. Put in data
3. Assign next as NULL for last element in list
4. Check if list is empty then make new Node as head
5. else traverse through the last node

![insertion-at-end](../images/llinsertionend.png)

```c++
void append(int data)
{
    //1. Allocate new node
    Node *new_node = new Node();
    //2. Add data to neew node
    new_node->setData(data);
    //3. set next as NULL
    new_node->setNext(NULL);
    //4. check if list is empty
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    //5. if list is non empty
    else
    {
        Node *temp = head;
        while (temp->getNext() != NULL)
        {
            temp = temp->getNext();
        }
        temp->setNext(new_node);
        return;
    }
}
```

## Insertion after a giveen Node

> It is a 5 Step Process(insert a node after given node):

1. check if the given node is NULL
   - True : return
   - false : continue
2. Allocate new node
3. put in the data in new node
4. make next of new node as next of prev node
5. make next of prev node as new node

![insertion-at-begining](../images/llinsertion3.png)

```C++
void insertAfter(Node *prev, int data)
{
    //1. check if given node is NULL
    if (prev == NULL)
    {
        cout << "Prev pointer is null so it may be possible that list is empty so insertion is not possible";
        return;
    }
    //2. allocate new node
    Node *new_node = new Node();
    //3. set data of new_node
    new_node->setData(data);
    //4. set next of new node
    new_node->setNext(prev->getNext());
    //set next of prev as new node
    prev->setNext(new_node);
}
```

## Deletion at Beginning(POP)

> It is 4 Step Process

1. Check if head is NULL
2. Store head to a temp variable
3. assign head as next of head
4. free temp

![delete-at-beginning](../images/delete1.png)

```c++
void pop()
{
    //1. check if head is null then return
    if (head == NULL)
    {
        cout << "List is empty"
             << "\n";
        return;
    }
    //2. make a temp variable to store  head
    Node *temp = head;
    //3. make head as next of head
    head = temp->getNext();
    //remove all pointer pointing to head
    temp = NULL;
    //4.free temp
    free(temp);
}
```

## Deletion at the end(pop_back)

> It is a 4 step Process

1. Check if head is NULL
2. traverse till last node
3. set next of second last elemnet as null
4. free last element

![delete-at-end](../images/delete2.png)

```C++
void pop_back()
{
    //1. check if head is null
    if (head == NULL)
    {
        cout << "List is empty"
             << "\n";
        return;
    }
    //2.trverse till last node of list
    Node *temp = head;
    Node *secondLast = NULL;
    while (temp->getNext() != NULL)
    {
        secondLast = temp;
        temp = temp->getNext();
    }
    //3.set prev of last node as null
    secondLast->setNext(NULL);
    //4. Remove all pointer pointing to head
    temp = NULL;
    secondLast = NULL;
    //5.free the memory of temp
    free(temp);
    free(secondLast);
}
```

## Deletion after a node or At a given position

![delete-at-beginning](../images/delete3.png)

```C++
int deleteNodeAt(int a)
{
    //declare a pointer variable to head
    Node *temp = head;
    //set a count varible to check position
    int count = 0;
    //traverse through list
    while (temp != NULL)
    {
        count++;
        if (count == a)
        {
            temp->setNext(temp->getNext()->getNext());
            temp = NULL;
            free(temp);
            return count;
        }
        temp = temp->getNext();
    }
    return count;
}
```

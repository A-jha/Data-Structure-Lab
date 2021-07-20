# List in C++ Standard Template Library (STL)

Lists are sequence containers that allow non-contiguous memory allocation.

As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick.

Normally, when we say a List, we talk about **doubly linked list**. For implementing a singly linked list, we use forward list.

```C++
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> list1, list2;
    list1.push_back(1);
    list2.push_back(3);

    cout << list1.back();
}
```

## Function used with list

- **front()** - first el in list
- **back()** - last el in list
- **push_front(el)** - add el at beginning
- **push_back(el)** - adds el to back
- **pop_front()** - removes first el
- **pop_back()** - removes last el
- **list::begin()** - return iterator pointing to first element (r- rverse iterator)
- **list::end()** - return iterator pointing to last element
- **empty()** - return bool empty of not
- **insert()** - insert element in the list befor an element at an specified pos
- **erase()** - remove single of range of element from the list
- **assign()** - Assign new element to list by replacing current element and resizes the list
- **remove()** - remove all element from the list which are equal to the given el
- **list::remove_if()** - remove el as per condition in if
- **reverse()** - reverse a list
- **size()** - no of el in the list
- **resize()** - used to resize a container
- **sort()** - sort list in accending order
- **max_size()** - return upper bound of container capacity
- **unique()** - remove all duplicate consecutive element from the list
- **emplace_front()** - used to insert a new element into the list container, the new element is added to the beginning of the list.
- **emplace_back()** - used to insert a new element into the list container, the new element is added to the end of the list.
- **clear()** - used to remove all the elements of the list container, thus making it size 0.
- **swap()** - used to swap the contents of one list with another list of same type and size.
- **splice()** - Used to transfer elements from one list to another
- **merge()** - Extends list by inserting new element at a given position.

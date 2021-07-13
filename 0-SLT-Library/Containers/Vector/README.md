# Vector in C++ STL

Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array.

Removing the last element takes only constant time because no resizing happens.

Inserting and erasing at the beginning or in the middle is linear in time.

## iterators

- **begin()** - Returns an iterator pointing to the first element in the vector

- **end()** - Iterator poining to last element of vector

- **rbegin()** - Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

- **rend()** - Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

## Capacity

- **size()** - No of element in vector

- **max_size()** - Maximum element a vector contain can take

- **capacity()** - capacity is allocated as n\* 8 (if vector size = 5 element then capacity is 8 and if vetor size = 11 element than capacity = 16)

- **resize(n)** - Resizes the container so that it contains ‘n’ elements

- **empty()** - return boolen for vector is empty or not

- **shrink_to_fit()** - reduces the capacity of the container

- **reserve()** - Requests that the vector capacity be at least enough to contain n elements.

## Element access

- **refernceoperator[g]** - print the element of as per index passed

- **at(g)** -

- **fron()** - first element of vector

- **back()** - last element of vector

- **data()** - all data of vector (assign all data of vector to a pointer variable)

## Modifiers

- **assign()** - assign elements to vector ( **assign(n,item)** )

- **push_back()** - pushes element into back of vector

- **pop_back()** - remves element from back of vector

- **insert()** - insert new element before the specified position

- **erase()** - remove the element form te conainer and container

- **swap()** - sapr two vector's content

- **clear()** - remove all the element of the vector

- **emplace()** - it extends the container by inserting new element at position

- **emplace_back()** - insert new element at back

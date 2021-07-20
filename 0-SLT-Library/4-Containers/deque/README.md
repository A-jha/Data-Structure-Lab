# Deque in C++ Standard Template Library (STL)

Allows epansion from front and back.

Similar to vector but more efficient in case of insertion and deletion.

contoguous memory allocation may or may not happen.

Double Ended Queues are basically an implementation of the data structure double ended queue.

A queue data structure allows
insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.

The functions for deque are same as vector, with an addition of push and pop operations for both front and back.

```c++
#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> queue1;
}
```

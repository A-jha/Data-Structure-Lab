# Binary Search Tree

- As per name this is a special type of binary tree which is used to store data in a manner that we can easily get the desired data in less time .

- all node smaller than root is in left and all node greater and equals to root are in right.

![bst](https://static.javatpoint.com/ds/images/binary-search-tree.png)

## Why binary tree ?

- searching becomes easy and time complexity of binary search in log<sub>2</sub>n

- Insertion and deletion time complexity also improved.

### Create a binary tree with the give data

**logic :**

- insert first element in the root
- read the next element if it is less than than root then left child
- otherwise right child

Example:-

> 43 10 79 90 12 54 11 9 50

1: insert 43 to root

> root->data = 43

2: Insert 10 here 10 is less than 43 so insert it into the left of root

> root->left->data = 10

3: insert 79 as 79 is greater than 43 hence insert 79 to right of root

> root->right->data = 79

4: so on . . .

![bst](https://static.javatpoint.com/ds/images/binary-search-tree-creation.png)

## Operation on Binary tree

1. Searching

2. Insertion

3. Deletion

4. Inorder, preorder, Postorder traversal

5. Minimum element

6. Maximum element

### Insertion Algorithm

```
Insert(root, key):

1. Create a node and allocate memory
2. add data i.e key to newNode-> data = key
3. Now if key's value is less than root->data value then key will be in left of root
4. else in right
5. repeat step 3 or 4 until you find the right position
```

## Memory Management

- Heap (40%) : Heap is a dynamic Memory, Size of all other memory segment is fixed but heap can grow at run time . It call perform allocation and de-allocation of memory during runtime.

- Stack(30%) : Function call variable are stored in stack during function call

- Static / Global( 10%)

- Code/text (20%)

👍 **NULL is a macro for address 0**

### 🤪 Important Terms

1. Height of a Node : Number of edges in longest path from the node to a leaf node.

2. Height of a tree :Height of root node

   ▶️ height of a tree with 1 node is 0

3. Depth of a node : No of edges in path from root to that node

## Tree Traversal Algorithm

Process od visiting each node in the tree exactly once on some order.

There are mainly two category of algorithms :

<img src="https://static.javatpoint.com/ds/images/binary-search-tree.png" width="200">

1. Breadth First

   - Level-order traversal

   for the given tree it will print

   > 30 15 60 7 22 45 75 17 27

   Logic:

   - Enqueue root and while dequeuing root enqueue all of roots child and this process go on

2. Depth First
   - Preorder (Root--Left--Right)
   - postOrder (Left--Right--Root)
   - inOrder (Left--Root--Right)

## Deletion in binary tree

- Deletion is simple if we delete leaf node.

- Other wise there may be three cases

  1.  if the element to be deleted is a leaf node
      ```
      - To delete leaf node
      Find the leaf node and replace the root that is pointing to leaf got null
      ```
  2.  if element to be deleted has one child

      ```
      - To delete node with one child
      Replace the child of the node to be deleted as the child of the root of the node whose child is to be deleted

      ```

  3.  if the element to be deleted has both children

      ```
      - Delete the node having two child
      Find the max left child of the node to be deleted and replace that node with the node to be deleted

      and delete the maximum node found
      ```

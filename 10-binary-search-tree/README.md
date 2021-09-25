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

### Deletion Algorithm

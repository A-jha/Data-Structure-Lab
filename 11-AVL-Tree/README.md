# AVL Tree

AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees cannot be more than one for all nodes.

### Problem With BST

- The disadvantage of a skewed binary search tree is that the worst case time complexity of search in O(n)

## Why AVL Tree ?

- There is a need to maintain the binary search tree to be of balanced height, so that it is possible to obtain for the search option a time complexity of O(log n) in the worst case.

- One of the most popular balanced tree

## What is AVL tree ?

- An empty tree is an AVL tree

- A non empty binary tree where balance factor is in range [-1, 1]

- Balance factor can be calculated as the difference of **(Hl - Hr)**

![AVL-tree](https://static.javatpoint.com/ds/images/avl-tree.png)

### insertion in AVL Tree

- If after insertion of element, the balance factor of any node in the tree is affected so as to render the binary search tree unbalanced, we resort to techniques called rotations to restore the balance of the search tree

## Rotation in AVL Tree

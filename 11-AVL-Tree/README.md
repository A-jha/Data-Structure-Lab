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

## insertion in AVL Tree

Insertion in AVL tree is same as insertion in Binary search tree but if they violets the balance factor then tree needs balancing.

- Balancing in AVL tree is done using rotation.

### Rotation in AVL Tree

Rotation is required when balance factor of any node is not in between -1 and 1 or if any node of tree is **Critical Node**

To perform Rotation it is necessary to identify a specific node **A** whose balance factor (BF) is neither 0, 1 or -1 and which is **nearest ancestor to the inserted node** on the path from the inserted node on the path from the inserted node on the path from the inserted node on the path from the inserted node to the root

- During insertion balance factor of it's ancestor changes only.

There are four types of rotations

1. LL Rotation : Inserted node is in left subtree of left sub tree of Node A
2. RR Rotation : Inserted node is in the right subtree of right subtree of Node A
3. LR Rotation : Inserted Node is right subtree of left subtree of Node A
4. RL Rotation : Inserted node is left subtree of right subtree of Node A

### How To solve easily?

- For LL and RR rotation identify A and B then make A as child of B

![img](https://i.ibb.co/Sd69Jyc/llrr.png)

- For LR and RL rotation identify A, B and C then make A and B child of C

![img](https://i.ibb.co/kS2Bjnr/lrrl.png)

## Create an AVL Tree

> 5 7 19 12 10 15 18 20 25 23

<img src="./AVL.drawio.svg" alt="svg" align="center">

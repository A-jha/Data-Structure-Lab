#include <iostream>
using namespace std;

struct Node
{
    Node *left;
    int data;
    Node *right;
};

//1. Create a root node and initially put null
Node *root = NULL;

// set root by making a function
void setRoot(int key)
{
    //1. allocate memory to root
    root = new Node();
    //2. put data and set right and left as null
    root->data = key;

    root->right = NULL;

    root->left = NULL;
}

//set left of given parent
void setLeft(int key, Node *parent)
{
    //1. create a node and allocate memory
    Node *newNode = new Node();
    newNode->data = key;
    newNode->right = NULL;
    //2. if parent node has already left child then
    //the left node of parent will become left of
    //newNode
    //3. if left of parent is null than thats
    // cool because setting up left of parent to
    // left of newNode will not effect
    newNode->left = parent->left;
    parent->left = newNode;
}

void setRight(int key, Node *parent)
{
    //1. create a node and allocate memory
    Node *newNode = new Node();
    newNode->data = key;
    newNode->left = NULL;

    // 2. check if parent has any right child
    //than make that child as right of new node
    //if no right in parent that make newNode->right as
    //null
    newNode->right = parent->right;
    parent->right = newNode;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    setRoot(10);
    setLeft(20, root);
    setRight(30, root);

    setLeft(50, root->left);
    setRight(60, root->left);

    setLeft(70, root->right);
    setRight(80, root->right);

    inOrder(root);
}
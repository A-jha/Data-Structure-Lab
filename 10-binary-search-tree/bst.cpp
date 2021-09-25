#include <iostream>
using namespace std;

//create a node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// here we are not using root as global variable
//create a root node
// Node *root = NULL;

//1. function to create node
Node *createNode(int item)
{
    Node *newNode = new Node();
    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//2. inorder traversal
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

//3. preorder traversal
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  ";
    preOrder(root->left);
    preOrder(root->right);
}
//4. postorder traversal
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

//5. find minimum element
void minimum(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    cout << "minimum element in tree is " << root->data << "\n ";
}

//6. maximum element in tree
void maximum(Node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    cout << "Maximum element is tree is " << root->data << "\n";
}

//7. insert a node at it right position
Node *insertNode(Node *root, int item)
{
    if (root == NULL)
    {
        return createNode(item);
    }
    if (item < root->data)
    {
        root->left = insertNode(root->left, item);
    }
    else
    {
        root->right = insertNode(root->right, item);
    }
    return root;
}

//8. search a node - basically find a given data
// then return evidence of finding it
bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    //now recur
    bool result1 = search(root->left, key);
    if (result1)
    {
        return true;
    }

    bool result2 = search(root->right, key);
    if (result2)
    {
        return true;
    }
    return false;
}

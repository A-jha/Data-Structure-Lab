#include <iostream>
#include <algorithm>
#define pow2(n) (1 << (n))
using namespace std;

//Node of Avl tree
struct Node
{
    int data;
    struct avl *left;
    struct avl *right;
};
//create  a global root such that we can use it anywhere
struct Node *root;

// now we will make class and define all the function inside class
class AvlTree
{
public:
    //1. difine a function to calculate height
    int height(Node *);
    //2. define a function to calculate difference between height
    int difference(Node *);
    //3. define rr rotaion function
    Node *rrRotation(Node *);
    //4. define ll rotation
    Node *llRotation(Node *);
    //5. define lr rotation
    Node *lrRotation(Node *);
    //6. define rl rotation
    Node *rlRotation(Node *);
    //7. define function to balance the tree
    Node *balance(Node *);
    // 8. insert new node to tree
    Node *insert(Node *);
    //9. show avl tree
    void show(Node *);
    //10. inorder traversal
    // void inorder(Node *);
    // //11. preorder traversal
    // void preorder(Node *);
    // //12. postorder traversal
    // void postorder(Node *);
    //13. Constructor
    AvlTree()
    {
        root = NULL;
    }
};

int AvlTree::height(Node *t)
{
    int h = 0;
    if (t != NULL)
    {
        int leftHeight = height(t->left);
        int rightHeight = height(t->right);
        int maxHeight = max(leftHeight, rightHeight);
        h = maxHeight + 1;
    }
    return h;
}

Node *AvlTree::difference(Node *t)
{
    int leftHeight = height(t->left);
    int rightHeight = height(t->right);
    int balanceFactor = leftHeight - rightHeight;
    return balanceFactor;
}

Node *AvlTree::rrRotation(Node *parent)
{
    Node *t = parent->right;
    parent->right = t->left;
    t->left = parent;
    cout << "Right-Right Rotation";
    return t;
}

Node *AvlTree::llRotation(Node *parent)
{
    Node *t = parent->left;
    parent->left = t->right;
    t->right = parent;
    cout << "Left-Left Rotaion";
    return t;
}

Node *AvlTree::lrRotation(Node *parent)
{
    Node *t = parent->left;
    parent->left = rrRotation(t);
    cout << "Left-Right Rotation";
    return llRotation(parent);
}

Node *AvlTree::rlRotation(Node *parent)
{
    Node *t = parent->right;

    parent->right = llRotation(t);
    cout << "Right-Left Rotation";
    return rrRotation(parent);
}

Node *AvlTree::balance(Node *t)
{
    int balanceFactor = difference(t);
    if (balanceFactor > 1)
    {
        if (difference(t->l) > 0)
        {
            t = llRotation(t);
        }
        else
        {
            t = lrRotation(t);
        }
    }
    else if (balanceFactor < -1)
    {
        if (difference(t->right) > 0)
        {
            t = rlRotation(t);
        }
        else
        {
            t = rrRotation(t);
        }
    }
    return t;
}

Node *AvlTree::insert(Node *root, int value)
{
    if (root == NULL)
    {
        Node *root = new Node();
        root->data = value;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (value < root->data)
    {
        root->left = insert(root->left, value);
        root = balance(root);
    }
    else if (value >= root->data)
    {
        root->right = insert(root->right, value);
        root = balance(root);
    }
    return root;
}

void AvlTree::show(Node *p, int l)
{
    int i;
    if (p != NULL)
    {
        show(p->right, l + 1);
        cout << " ";
        if (p == root)
        {
            cout << " <-Root-> ";
            for (int i = 0; i < l && p != r; i++)
            {
                cout << " ";
                cout << p->data;
                show(p->left, l + 1);
            }
        }
    }
}

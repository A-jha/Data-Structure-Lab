#include <iostream>
using namespace std;

// A tree node with name and rank and it has
// three pointers left, right and middle
struct Node
{
    int rank;
    string name;
    Node *left;
    Node *right;
    Node *middle;
};

//create a global root pointer
Node *root = NULL;

//1. allocate Memory to root node
void setRoot(int rank, string name)
{
    //memory allocated
    root = new Node();
    //set data
    root->name = name;
    root->rank = rank;
    //initially all other pointer will be null
    root->right = NULL;
    root->middle = NULL;
    root->left = NULL;
}
//2. Insert in left
void insertAtLeft(int rank, string name, Node *parent)
{
    //for insertion first create node and allocate memory
    Node *newNode = new Node();

    //put data
    newNode->name = name;
    newNode->rank = rank;

    //as this node is created so no child will be there
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->middle = NULL;

    //make this newNode as left child of parent
    parent->left = newNode;
}

void insertInMiddle(int rank, string name, Node *parent)
{
    //allocate memory to the newNode
    Node *newNode = new Node();

    //put data
    newNode->name = name;
    newNode->rank = rank;

    //as this node is created so no child will be there
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->middle = NULL;

    //make newNode as middle child of parent
    parent->middle = newNode;
}

void insertAtRight(int rank, string name, Node *parent)
{
    //for insertion first create node and allocate memory
    Node *newNode = new Node();

    //put data
    newNode->name = name;
    newNode->rank = rank;

    //as this node is created so no child will be there
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->middle = NULL;

    //make this newNode as left child of parent
    parent->right = newNode;
}

void displayTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->rank << " and " << root->name << " \n";
    displayTree(root->left);
    displayTree(root->middle);
    displayTree(root->right);
}

int main()
{
    setRoot(1, "Avinash");

    //set left of root
    insertAtLeft(2, "Sam", root);

    //set mid of root
    insertInMiddle(3, "Raja", root);

    //set right of root
    insertAtRight(4, "Sharma", root);

    displayTree(root);
}
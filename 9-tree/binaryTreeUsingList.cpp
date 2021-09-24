#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

//1. Create a root node and initially put null
Node *root = NULL;

// set root by making a function
void setRoot(int key)
{
    //1. allocate memory to root
    root = new Node();
    //2. put data and set next and prev as null
    root->data = key;

    root->next = NULL;

    root->prev = NULL;
}

//set left of given parent
void setLeft(int key, Node *parent)
{
    //1. create a node and allocate memory
    Node *newNode = new Node();
    newNode->data = key;
    newNode->next = NULL;
    //2. if parent node has already left child then
    //the prev node of parent will become prev of
    //newNode
    //3. if prev of parent is null than thats
    // cool because setting up prev of parent to
    // prev of newNode will not effect
    newNode->prev = parent->prev;
    parent->prev = newNode;
}

void setRight(int key, Node *parent)
{
    //1. create a node and allocate memory
    Node *newNode = new Node();
    newNode->data = key;
    newNode->prev = NULL;

    // 2. check if parent has any next child
    //than make that child as next of new node
    //if no next in parent that make newNode->next as
    //null
    newNode->next = parent->next;
    parent->next = newNode;
}

void display()
{
    Node *temp = root;
    int i = 0;
    while (temp != NULL)
    {
        cout << "parent " << i << " : " << temp->data;
    }
}
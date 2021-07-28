#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    void setData(int a)
    {
        data = a;
    }
    void setNext(Node *a)
    {
        next = a;
    }
    int getData()
    {
        return data;
    }
    Node *getNext()
    {
        return next;
    }
};
//Declare Head Node as global so that we can pass it to all the function directly
Node *head = NULL;

void push(int data)
{
    Node *temp = new Node();
    temp->setData(data);
    temp->setNext(head);
    head = temp;

    temp = NULL;
    free(temp);
}
void delNode(int a)
{
    if (head == NULL)
    {
        cout << "List is empty"
             << "\n";
        return;
    }
    Node *temp = head;
    if (a == 0)
    {
        head = temp->getNext();
        free(temp);
        return;
    }

    //find previous node of node to be deleted
    for (int i = 0; temp != NULL && i < a - 1; i++)
        temp = temp->getNext();

    // If position is more than number of nodes
    if (temp == NULL || temp->getNext() == NULL)
        return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    Node *next = temp->getNext()->getNext();

    // Unlink the node from linked list
    free(temp->getNext()); // Free memory

    // Unlink the deleted node from list
    temp->setNext(next);
}

void display()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "list is empty";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    cout << "\n";
    delNode(1);
    display();
    delNode(2);
    display();
}
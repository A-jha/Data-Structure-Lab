#include <iostream>
#include <stack>
#include <list>
using namespace std;
//create a Node Class
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
Node *head = NULL;

void insert(int a)
{
    Node *newNode = new Node();
    newNode->setData(a);
    newNode->setNext(head);
    head = newNode;
}
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << "\n";
}
//everse A Link List
void reverse()
{
    if (head == NULL)
    {
        cout << "Stack Is empty ";
        return;
    }
    stack<Node *> S;
    Node *temp = head;
    while (temp != NULL)
    {
        S.push(temp);
        temp = temp->getNext();
    }
    temp = S.top();
    head = temp;
    S.pop();
    while (!S.empty())
    {
        temp->setNext(S.top());
        S.pop();
        temp = temp->getNext();
    }
    temp->setNext(NULL);
}

int main()
{
    insert(5);
    insert(7);
    insert(8);
    insert(9);
    display();
    reverse();
    display();
}
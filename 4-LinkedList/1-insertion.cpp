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
//declaring head as global
Node *head = NULL;
/*======Traversal through list=========*/
void display()
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << "\n";
}

/*=======Insertion in list============*/
//insertion at begining is called push
void push(int data)
{
    //1. create a new node
    Node *new_node = new Node();
    //2. add data to the node
    new_node->setData(data);
    //3.set next of new_node as head
    new_node->setNext(head);
    //set new_node as head
    head = new_node;
}

//insertion at the end is called append
void append(int data)
{
    //1. Allocate new node
    Node *new_node = new Node();
    //2. Add data to neew node
    new_node->setData(data);
    //3. set next as NULL
    new_node->setNext(NULL);
    //4. check if list is empty
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    //5. if list is non empty
    else
    {
        Node *temp = head;
        while (temp->getNext() != NULL)
        {
            temp = temp->getNext();
        }
        temp->setNext(new_node);
        return;
    }
}
//insertion after a given node
void insertAfter(Node *prev, int data)
{
    //1. check if given node is NULL
    if (prev == NULL)
    {
        cout << "Prev pointer is null so it may be possible that list is empty so insertion is not possible";
        return;
    }
    //2. allocate new node
    Node *new_node = new Node();
    //3. set data of new_node
    new_node->setData(data);
    //4. set next of new node
    new_node->setNext(prev->getNext());
    //set next of prev as new node
    prev->setNext(new_node);
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    append(8);
    append(7);
    append(6);
    append(5);
    insertAfter(head->getNext(), 100);
    display();
}
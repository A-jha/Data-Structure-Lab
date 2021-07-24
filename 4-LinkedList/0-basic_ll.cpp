#include <bits/stdc++.h>
using namespace std;

//ctreate a class Node
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

int main()
{
    /*================Create a Node data==================*/
    Node *head = NULL;

    //Allocate memory to head
    head = new Node();

    //insert 10 to head
    head->setData(10);
    //set head nextg to null
    head->setNext(NULL);

    //print head data
    cout << head->getData();
    //print address of next
    cout << endl
         << head->getNext();

    /*================Create a Node data==================*/
    //Create a second node and allocate memory
    Node *second = new Node();

    //set data to second node
    second->setData(20);
    //set next
    head->setNext(second);

    //print second element
    cout << endl
         << head->getNext()->getData()
         << endl;

    /*================Create a Node data==================*/
    Node *third = new Node();
    third->setData(30);
    second->setNext(third);
    third->setNext(NULL);

    /*=============Print all node=========================*/
    Node *temp = head;
    while (temp)
    {
        cout << temp->getData() << endl;
        temp = temp->getNext();
    }
}

/*
10
0
20
10
20
30
*/
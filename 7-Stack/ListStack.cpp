#include <iostream>
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

//declare head globally so that we can access it any where
Node *head = NULL;

class Stack
{
    int top = -1;

public:
    void push(int data)
    {
        //Create a node
        Node *newNode = new Node();
        newNode->setData(data);
        //push on top of list
        newNode->setNext(head);
        head = newNode;
    }
    int pop()
    {
        //check if list is empty
        if (head == NULL)
        {
            cout << "Stack underflow"
                 << "\n";
            return 400;
        }
        //remove to of list
        Node *temp = head;
        head = temp->getNext();
        int data = temp->getData();
        //free temp
        free(temp);
        return data;
    }
    int topel()
    {
        return head->getData();
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        cout << "Hey here we are implementing link list which can allocate memory during run times"
             << "\n";
        return false;
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
};

int main()
{
    Stack *s = new Stack();

    s->push(10);
    s->push(11);
    s->push(12);
    s->display();
    s->pop();
    s->display();
    cout << "top element" << s->topel();
}
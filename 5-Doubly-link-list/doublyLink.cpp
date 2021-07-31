#include <iostream>
using namespace std;

// struct Node{
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

class Node
{
    int data;
    Node *next;
    Node *prev;

public:
    void setData(int a)
    {
        data = a;
    }
    int getData()
    {
        return data;
    }
    void setNext(Node *a)
    {
        next = a;
    }
    Node *getNext()
    {
        return next;
    }
    void setPrev(Node *a)
    {
        prev = a;
    }
    Node *getPrev()
    {
        return prev;
    }
};
Node *head = NULL;
int display()
{
    //if list is empty
    if (head == NULL)
    {
        cout << "List is empty"
             << "\n";
        return 0;
    }
    Node *temp = head;
    //traverse till temp->next!=null
    int length = 0;
    while (temp != NULL)
    {
        length++;
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << "\n";
    return length;
}

void push(int a)
{
    //1. create a node
    Node *newNode = new Node();
    newNode->setData(a);
    //2. assign Null to prev pointer
    newNode->setPrev(NULL);
    //3.next of new node as head
    newNode->setNext(head);

    //4.make new node as head
    head = newNode;
}

void append(int a)
{
    //1. create a new node
    Node *newNode = new Node();
    newNode->setData(a);
    //2. set next of new node as null
    newNode->setNext(NULL);

    //3. check if list is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // 4. if head is not null then traverse till end
    Node *temp = head;
    while (temp->getNext() != NULL)
    {
        temp = temp->getNext();
    }
    newNode->setPrev(temp);
    temp->setNext(newNode);
}

//indexing of list is 1,2,3,4,5....
void insertAt(int data, int position)
{
    Node *temp = head;
    int length = 1;

    while (temp != NULL && position > length)
    {
        length++;
        temp = temp->getNext();
    }

    if (temp == NULL)
    {
        cout << "Index is out of range try again."
             << "\n";
        return;
    }
    Node *newNode = new Node();
    newNode->setData(data);
    temp->getPrev()->setNext(newNode);
    newNode->setPrev(temp->getPrev());
    newNode->setNext(temp);
    temp->setPrev(newNode);
}
//delete first node from list
void pop()
{
    //1.check if list is empty
    if (head == NULL)
    {
        cout << "List is Empty"
             << "\n";
        return;
    }
    //if list contain one node
    if (head->getNext() == NULL)
    {
        head = NULL;
        return;
    }
    //if list has more than one node
    Node *temp = head;

    head->getNext()->setPrev(NULL);

    head = head->getNext();

    free(temp);
}

int main()
{
    push(4);
    display();
    pop();
    display();
}
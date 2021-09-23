// |-->1---->2--->3--+
// |                 |
// |-----------------+
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

//enqueue function
void enqueue(int item)
{
    //1. if head == NULL
    if (head == NULL)
    {
        head = new Node();
        head->data = item;
        head->next = head;
        return;
    }
    //2. create a new node and allocate memory
    Node *newNode = new Node();
    //3. put data
    newNode->data = item;
    //4. set next of new node to head
    newNode->next = head;
    //5. check the node having next as head
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int dequeue()
{

    int data = -1;
    if (head == NULL)
    {
        cout << "Queue is Empty\n";
        return data;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    data = head->data;
    temp->next = head->next;
    Node *temp1 = head;
    head = head->next;
    free(temp1);
    cout << "dequeue\n";
    return data;
}
//1--->2--->3--->4--->head(1)
void display()
{
    Node *temp = head;
    cout << temp->data << "\t";
    while (temp->next != head)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    dequeue();
    display();
    enqueue(10);
    display();
    enqueue(11);
    enqueue(12);
    enqueue(13);
    display();
    cout << "delete : " << dequeue() << "\n";
    display();
}

#include <iostream>
using namespace std;
//create a node
struct Node
{
    int data;
    struct Node *next;
};

//Create  a global head
struct Node *head = NULL;

//first in first out

//insert at end
void push(int item)
{
    if (head == NULL)
    {
        head = new Node();
        head->data = item;
        head->next = NULL;
    }
    else
    {
        //1. create a node and allocate memory
        struct Node *newNode = new Node();
        newNode->data = item;
        //2. As new node is last node
        newNode->next = NULL;
        //3. traverse till last node and
        //make next of last node to new Node
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

//delete from beginning
int pop()
{
    //1. check if queue is not empty
    if (head == NULL)
    {
        cout << "Sorry queue is empty\n";
        return -1;
    }
    //2. store the head in new node such that we can free it
    int rdata = head->data;
    Node *temp = head;
    head = head->next;
    free(temp);
    return rdata;
}

//print the queue
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    push(10);
    display();
    cout << "deleted: " << pop() << "\n";
    display();
}
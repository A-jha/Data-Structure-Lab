#include <iostream>
using namespace std;
//global variable
int a = 10;
//Create a Node
struct Node
{
    int data;
    Node *next;
};
struct Node *head = NULL;

// Create
void inserAtBegining(int data)
{
    //1. Create a new Node
    struct Node *newNode = new Node();
    //2. insert data into new node
    newNode->data = data;
    //3. newNode->next = head
    newNode->next = head;
    //4. make newNode as head
    head = newNode;
}

void insertAtEnd(int data)
{
    //1. create a new node
    struct Node *newNode = new Node();
    // 2. put data
    newNode->data = data;
    //3. next of tail is null
    newNode->next = NULL;
    //4. if no nodes are there
    if (head == NULL)
    {
        head = newNode;
    }
    //5. if there is element
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// 2---->3--->4--->5--->999---->null
// update Node->data based on data
void updateNode(int data, int newData)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            temp->data = newData;
        }
        temp = temp->next;
    }
}
//delete node based on data
//2--->3---->4---->5---->6---->null
//1. head delete
//2. mid element

//1. Head
// temp = head;
//i. head = head->next;
//free(temp)
void deleteNode(int data)
{
    //1. if node to be deleted is head
    if (head->data == data)
    {
        //1.take a reference of head
        Node *temp = head;
        //2. update head to new head
        head = head->next;
        //free the previous head
        free(temp);
        return;
    }
    //2. if mid element
    Node *temp = head;
    Node *prev;
    //2--->3---->4---->5---->null
    while (temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }
    //make next of 3/prev temp->next
    prev->next = temp->next;
    free(temp);
}

//Read
void displayList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    inserAtBegining(10);
    inserAtBegining(20);
    inserAtBegining(30);
    inserAtBegining(40);
    inserAtBegining(50);
    insertAtEnd(999);
    displayList();
    deleteNode(50);
    displayList();
    updateNode(999, 111);
    displayList();
}
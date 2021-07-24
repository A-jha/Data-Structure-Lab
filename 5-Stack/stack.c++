#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 10
//#define RAND_MAX 10
class Stack
{
    int top;

public:
    int a[MAX];
    Stack() { top = -1; }
    bool push(int item);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void display();
};

//push
bool Stack::push(int item)
{
    if (isFull())
    {
        cout << "\nCan't insert stack is full\n";
        return false;
    }
    else
    {
        top++;
        a[top] = item;
        cout << a[top] << "is pushed to stack at position" << top << endl;
        return true;
    }
}
//pop
int Stack::pop()
{
    if (isEmpty())
    {
        cout << "stack is empty bro"
             << "\n";
        return 0;
    }
    else
    {
        int poped = a[top];
        top--;
        return poped;
    }
}
//peek
int Stack::peek()
{
    return a[top];
}
//isEmpty
bool Stack::isEmpty()
{
    if (top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//isFull
bool Stack::isFull()
{
    if (top > MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack::display()
{
    for (int i = 0; i < top + 1; i++)
    {
        cout << a[i] << "\n";
    }
}

int main()
{
    class Stack s;
    int rand_max = 10;
    for (int i = 0; i < 10; i++)
    {
        s.push(rand() % 10);
    }
    s.display();
    cout << "\n"
         << s.pop() << " poped";
    cout << "\n"
         << s.pop() << " poped";
    cout << "\n"
         << s.peek() << " is on top of stack";
}
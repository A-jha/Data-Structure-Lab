#include <iostream>
using namespace std;
//macro to define size of stack
#define LENGTH 100

class Stack
{
    int stack[LENGTH];
    int top = -1;

public:
    void incrTop()
    {
        top++;
    }
    void decrTop()
    {
        top--;
    }
    void push(int data)
    {
        if (!isFull())
        {
            top++;
            stack[top] = data;
        }
        else
        {
            cout << "Stack overflow\n";
        }
    }
    int pop()
    {
        if (!isEmpty())
        {
            int temp = stack[top];
            top--;
            return temp;
        }
        else
        {
            cout << "Stack underflow\n";
            return -400;
        }
    }
    int topel()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return 404;
        }
        return stack[top];
    }
    void display()
    {
        int temp = top;
        while (temp + 1)
        {
            cout << stack[temp] << " ";
            temp--;
        }
        cout << "\n";
    }
    int length()
    {
        return top + 1;
    }
    bool isFull()
    {
        if (top == LENGTH - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    //1. declare an array as stack
    Stack *s = new Stack();

    //2. push
    s->push(5);
    // s->push(6);
    // s->push(7);
    s->push(8);
    s->display();
    //3. pop
    cout << "poped : " << s->pop() << "\n";
    cout << "poped : " << s->pop() << "\n";
    //4. Length
    cout << "length : " << s->length() << "\n";
    //5. display
    s->display();
    //6. Top
    cout << "top : " << s->topel() << "\n";
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX_LENGTH 10
class MyQueue
{
    int arr[MAX_LENGTH];
    int front;
    int rear;

public:
    void setFront(int n)
    {
        front = n;
        cout << "Front is set to " << n << "\n";
    }
    void setRear(int n)
    {
        rear = n;
        cout << "Rear is set to " << n << "\n";
    }
    int getRear()
    {

        return arr[rear];
    }
    int getFront()
    {
        return arr[front];
    }
    bool isEmpty()
    {
        if (front == -1 and rear == -1)
        {
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if (rear == MAX_LENGTH - 1)
        {
            return true;
        }
        return false;
    }
    void enqueue(int n)
    {
        if (isFull())
        {
            cout << "Sorry queue is full\n";
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
        }
        else
        {
            rear = rear + 1;
        }
        arr[rear] = n;
        cout << "inserted successfully " << n << "\n";
    }
    int dequeue()
    {
        int temp = arr[front];
        if (isEmpty())
        {
            cout << "sorry queue is empty\n";
            return -1;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front - 1;
        }
        return temp;
    }
};

int main()
{
    MyQueue *queue = new MyQueue();
    queue->setFront(-1);
    queue->setRear(-1);

    queue->enqueue(6);

    queue->enqueue(1);

    queue->enqueue(12);

    queue->enqueue(165);

    queue->enqueue(121);

    cout << "dequeued the queue " << queue->dequeue() << "\n";

    cout << "dequeued the queue " << queue->dequeue() << "\n";

    cout << "dequeued the queue " << queue->dequeue() << "\n";

    cout << "front of the queue " << queue->getFront() << "\n";

    cout << "End of the queue " << queue->getRear() << "\n";
}
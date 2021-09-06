#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class MyQueue
{
public:
    int front, rear, size;
    unsigned capacity;
    int *array;
};

//function to create Queue
MyQueue *createQueue(unsigned capacity)
{
    MyQueue *queue = new MyQueue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    //this is important see the enqueue
    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity];
    return queue;
}

int isFull(MyQueue *queue)
{
    return queue->size == queue->capacity;
}

int isEmpty(MyQueue *queue)
{
    return queue->size == 0;
}

void enqueue(MyQueue *queue, int item)
{
    if (isFull(queue))
    {
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueue to queue\n";
}

int dequeue(MyQueue *queue)
{
    if (isEmpty(queue))
    {
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(MyQueue *queue)
{
    if (isEmpty(queue))
    {
        return INT_MIN;
    }
    return queue->array[queue->front];
}

int rear(MyQueue *queue)
{
    if (isEmpty(queue))
    {
        return INT_MIN;
    }
    return queue->array[queue->rear];
}
int main()
{
    MyQueue *queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    cout << dequeue(queue)
         << " dequeued from queue\n";

    cout << "Front item is "
         << front(queue) << endl;
    cout << "Rear item is "
         << rear(queue) << endl;

    return 0;
}
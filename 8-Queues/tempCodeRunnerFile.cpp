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
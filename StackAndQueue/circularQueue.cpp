// leave one space empty
#include <iostream>
using namespace std;

#define MAX 5 // physical size of array (we can store at most MAX-1 items)

int q[MAX];
int front = 0; // points to the position *before* the first element
int rear = 0;  // points to the last element

bool isEmpty()
{
    // queue is empty when front and rear are at same position
    return (front == rear);
}

bool isFull()
{
    // queue is full when advancing rear by 1 would hit front
    return ((rear + 1) % MAX == front);
}

void enqueue(int value)
{
    if (isFull())
    {
        cout << "Queue is full (overflow)\n";
        return;
    }

    // move rear forward circularly
    rear = (rear + 1) % MAX;
    q[rear] = value;
    cout << value << " -- enqueued\n";
}

int dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty (underflow)\n";
        return -1; // error value
    }

    // move front forward circularly
    front = (front + 1) % MAX;
    int val = q[front];
    cout << val << " -- dequeued\n";
    return val;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";
    int i = (front + 1) % MAX;
    while (true)
    {
        cout << q[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    cout << "\n";
}

int main()
{
    enqueue(20);
    enqueue(22);
    enqueue(24);
    enqueue(40);
    enqueue(255);
    enqueue(455); // queue is full
    dequeue();    // 20 dequeued leaving one space in the queue
    enqueue(555); // 555 enqueued in the space left by 20
    enqueue(655);
    return 0;
}
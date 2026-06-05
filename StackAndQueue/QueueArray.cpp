#include <iostream>
using namespace std;
#define max 5

int queue[max];

int rear = -1;
int front = -1;
int count = 0;

bool isfull()
{
    // return ((rear + 1) % max == front);
    return (count == max);
}

bool isEmpty()
{
    // return (front == -1);
    return (count == 0);
}

void enqueue(int value)
{
    if (isfull())
    {
        cout << "queue is full" << endl;
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % max;
    queue[rear] = value;
    count++;
    cout << value << "-- enqueued" << endl;
}

int dequeue()
{
    if (isEmpty())
    {
        cout << "queue is empty" << endl;
        return -1;
    }

    int value = queue[front];
    front--;
    count--;
    cout << value << "-- dequeued" << endl;
    return value;
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
}

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *front = NULL;
node *rear = NULL;

bool isempty()
{
    return front == NULL;
}

void enqueue(int value)
{
    if (isempty())
    {
        node *n = new node;
        n->data = value;
        n->next = NULL;
        front = rear = n;
        cout << value << " -- enqueued\n";
    }
    else
    {
        node *n = new node;
        n->data = value;
        n->next = NULL;
        rear->next = n;
        rear = n;
        cout << value << " -- enqueued\n";
    }
}

int dequeue()
{
    if (isempty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    else
    {
        node *n = new node();
        n = front;
        int value = n->data;
        front = front->next;
        cout << value << " -- dequeued\n";
        delete n;
        return value;
    }
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
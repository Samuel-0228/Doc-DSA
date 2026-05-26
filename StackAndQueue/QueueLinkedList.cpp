#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    if (front == NULL)
        cout << "Empty Queue\n";
    else
    {
        Node *temp = front;
        front = front->next;
        delete temp;
        if (front == NULL) // queue became empty
            rear = NULL;
    }
}

void display()
{
    if (front == NULL)
    {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue: ";
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    cout << "After dequeue:\n";
    display();

    return 0;
}
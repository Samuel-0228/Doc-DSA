#include <iostream>
using namespace std;

class queue
{
    int arr[100];
    int front, rear;

public:
    queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == 99)
            cout << "Queue overflow\n";
        else
            rear++;
        arr[rear] = x;
    }

    void display()
    {
        if (front > rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void dequeue()
    {
        if (front > rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        front++;
    }
};

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    cout << "After deleting 10 \n";
    q.dequeue();
    q.display();
}

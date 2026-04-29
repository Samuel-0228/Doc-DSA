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
}

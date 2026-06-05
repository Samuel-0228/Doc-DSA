#include <iostream>

using namespace std;

// Create an empty Stack
int const SIZE = 5;
int STACK[SIZE];
int top = -1;

bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top >= SIZE - 1;
}
// basic operations
void push(int value)
{
    if (isFull())
    {
        cout << "STACK Overflow" << endl;
    }
    else
    {
        top++;
        STACK[top] = value;
        cout << value << " - Pushed." << endl;
    }
}

int pop()
{
    int data = INT_MIN;
    if (isEmpty())
    {
        cout << "STACK underflow." << endl;
    }
    else
    {
        data = STACK[top];
        top--;
        cout << data << " - Poped." << endl;
    }
    return data;
}

int peek()
{
    int data = INT_MIN;
    if (isEmpty())
    {
        cout << "STACK Underflow" << endl;
    }
    else
    {
        data = STACK[top];
    }
    return data;
}

void viewStack()
{
    for (int i = 0; i <= top; i++)
    {
        cout << STACK[i] << "--";
    }
    cout << endl;
}

int main()
{
    cout << "STACK Created." << endl;
    push(4);
    viewStack();
    push(5);
    viewStack();
    cout << "=======PEEK========" << endl;
    cout << "PEEK the value" << peek() << endl;
    peek();
    viewStack();
    cout << "============" << endl;
    push(6);
    viewStack();
    pop();
    viewStack();
    pop();
    viewStack();
    pop();
    viewStack();
    pop();
    viewStack();
    return 0;
}

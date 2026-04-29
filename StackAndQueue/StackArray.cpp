#include <iostream>
using namespace std;

class stack
{
    int top;
    int arr[100];

public:
    stack()
    {
        top = -1;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else
            top--;
    }

    void peek()
    {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
            cout << arr[top] << endl;
    }

    void push(int x)
    {
        if (top == 99)
            cout << "Stack overflow";
        else
            top++;
        arr[top] = x;
    }
};

int main()
{
    stack s;
    s.push(2);
    s.push(20);
    s.pop();
    s.peek();
}
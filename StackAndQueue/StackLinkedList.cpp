#include <iostream>
using namespace std;

struct stack
{
    int data;
    stack *next;
};

stack *top = NULL;

void push(int x)
{
    stack *temp = new stack();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop()
{
    if (top == NULL)
        cout << "stack empty\n";
    else
    {
        stack *temp = top;
        top = top->next;
        delete temp;
    }
}

void peek()
{

    if (top == NULL)
        cout << "The stack is empty\n";
    else
    {
        cout << top->data;
    }
}

int main()
{
    push(2);
    push(20);
    pop();
    pop();
    peek();
}

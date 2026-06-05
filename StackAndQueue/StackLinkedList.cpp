#include <iostream>
using namespace std;

struct stack
{
    int data;
    stack *next;
};

stack *top = NULL;

bool isempty()
{
    return top == NULL;
}
void push(int x)
{
    stack *temp = new stack();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop()
{
    if (isempty())
        cout << "stack empty\n";
    else
    {
        stack *temp = top;
        top = top->next;
        cout << temp->data << " - Poped\n";
        delete temp;
    }
}

void peek()
{

    if (isempty())
        cout << "The stack is empty\n";
    else
    {
        cout << top->data;
    }
}

void viewStack()
{
    stack *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "--";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    push(2);
    push(20);
    push(30);
    push(40);
    pop();
    pop();

    viewStack();

    peek();
}

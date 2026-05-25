#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void displayListCircular(node *n)
{

    node *start = n;
    do
    {
        cout << n->data << "->";
        n = n->next;
    } while (n != start);
    cout << "back to " << start->data << endl;
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *tail = new node();

    head->data = 10;
    head->next = second;
    head->prev = tail;

    second->data = 20;
    second->next = tail;
    second->prev = head;

    tail->data = 30;
    tail->next = head;
    tail->prev = second;

    displayListCircular(head);
}
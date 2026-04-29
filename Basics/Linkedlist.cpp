#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *first = new node{10, nullptr};
    node *second = new node{20, nullptr};
    node *third = new node{30, nullptr};

    first->next = second;
    second->next = third;
    third->next = nullptr;

    node *temp = first;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    delete first;
    delete second;
    delete third;
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *InsertAtBegining(Node *head, int data)
{
    Node *NewNode = createNode(data);
    NewNode->next = head;
    return NewNode;
}

Node *InsertAtEnd(Node *head, int data)
{
    Node *NewNode = createNode(data);

    if (head == NULL)
        return NewNode;

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NewNode;
    return head;
}

Node *InsertAtMiddle(Node *head, int data)
{
    Node *NewNode = createNode(data);

    if (head == NULL)
        return NewNode;

    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (prev == NULL)
    {
        NewNode->next = head;
        return NewNode;
    }

    prev->next = NewNode;
    NewNode->next = slow;
    return head;
}

Node *DeleteNode(Node *head, int key)
{
    Node *temp = head;
    Node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        delete temp;
        return head;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return head;
    }

    prev->next = temp->next;
    delete temp;
    return head;
}

int main()
{
    Node *head = NULL;

    head = InsertAtBegining(head, 30);
    head = InsertAtBegining(head, 20);
    head = InsertAtBegining(head, 10);

    head = InsertAtEnd(head, 40);

    printList(head);

    head = DeleteNode(head, 20);

    printList(head);

    return 0;
}

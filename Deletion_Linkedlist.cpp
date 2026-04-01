#include <iostream>

using namespace std;

struct node
{
    string name;
    int age;
    node *next;
};

void append(node *&head, const string &name, int age)
{
    node *newNode = new node{name, age, NULL};
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->name << " (" << temp->age << ")";
        if (temp->next != NULL)
        {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

bool deleteByName(node *&head, const string &targetName)
{
    if (head == NULL)
    {
        return false;
    }

    if (head->name == targetName)
    {
        node *toDelete = head;
        head = head->next;
        delete toDelete;
        return true;
    }

    node *prev = head;
    node *curr = head->next;

    while (curr != NULL)
    {
        if (curr->name == targetName)
        {
            prev->next = curr->next;
            delete curr;
            return true;
        }
        prev = curr;
        curr = curr->next;
    }

    return false;
}

void clearList(node *&head)
{
    while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    node *head = NULL;

    append(head, "samuel", 90);
    append(head, "emily", 24);
    append(head, "john", 31);

    cout << "Before deletion: ";
    printList(head);

    string nameToDelete;
    cout << "Enter name to delete: ";
    cin >> nameToDelete;

    if (deleteByName(head, nameToDelete))
    {
        cout << "Deleted node: " << nameToDelete << endl;
    }
    else
    {
        cout << "Node not found: " << nameToDelete << endl;
    }

    cout << "After deletion: ";
    printList(head);

    clearList(head);

    return 0;
}
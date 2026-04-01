#include <iostream>

using namespace std;

int main()
{
    struct node
    {
        string name;
        int age;
        node *next;
    }
        *head = NULL;
    /*  node *newnode = new node();
      newnode->name = "samuel";
      newnode->age = 90;*/

    if (head == NULL)
    {
        cout << "The list is empty" << endl;
        return 0;
    }

    node *temp1 = head;

    if (temp1->next == NULL)
    {
        delete temp1;
        head = NULL;
        return 0;
    }

    node *temp2 = NULL;
    while (temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    delete temp1;
}
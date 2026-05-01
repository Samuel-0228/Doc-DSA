struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    if (front == NULL)
        cout << "Empty Queue";
    else
    {
        Node *temp = front;
        front = front->next;
        delete temp;
    }
}
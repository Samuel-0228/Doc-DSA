#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // Create a deque of integers
    deque<int> dq;

    // Insert at the back (like queue enqueue)
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    cout << "Deque after push_back: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Insert at the front (stack-like push)
    dq.push_front(5);

    cout << "Deque after push_front: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Access front and back
    cout << "Front: " << dq.front() << endl; // 5
    cout << "Back:  " << dq.back() << endl;  // 30

    // Remove from front (like queue dequeue or stack pop)
    dq.pop_front();

    cout << "Deque after pop_front: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Remove from back
    dq.pop_back();

    cout << "Deque after pop_back: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    return 0;
}
#include <iostream>
#include <queue> // for priority_queue
#include <vector>
#include <functional> // for greater
using namespace std;

struct Task
{
    int id;
    int priority;
};

// Custom comparator: higher priority -> higher in the queue
struct TaskCompare
{
    bool operator()(const Task &a, const Task &b) const
    {
        return a.priority < b.priority; // lower priority means "smaller"
    }
};

int main()
{
    // Max-heap priority queue (default): largest element at top
    priority_queue<int> pqMax;

    pqMax.push(20);
    pqMax.push(5);
    pqMax.push(30);
    pqMax.push(10);

    cout << "Max-heap priority queue (top to bottom): ";
    while (!pqMax.empty())
    {
        cout << pqMax.top() << " ";
        pqMax.pop();
    }
    cout << endl;

    // Min-heap priority queue: smallest element at top
    priority_queue<int, vector<int>, greater<int>> pqMin;

    pqMin.push(20);
    pqMin.push(5);
    pqMin.push(30);
    pqMin.push(10);

    cout << "Min-heap priority queue (top to bottom): ";
    while (!pqMin.empty())
    {
        cout << pqMin.top() << " ";
        pqMin.pop();
    }
    cout << endl;

    // Priority queue with custom objects (Task)
    priority_queue<Task, vector<Task>, TaskCompare> pqTask;

    pqTask.push({1, 5});  // id=1, priority=5
    pqTask.push({2, 10}); // id=2, priority=10
    pqTask.push({3, 1});  // id=3, priority=1

    cout << "Task priority queue (highest priority first): ";
    while (!pqTask.empty())
    {
        Task t = pqTask.top();
        cout << "(id=" << t.id << ", priority=" << t.priority << ") ";
        pqTask.pop();
    }
    cout << endl;

    return 0;
}
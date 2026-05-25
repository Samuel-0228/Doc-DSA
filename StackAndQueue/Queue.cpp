#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(20);
    q.push(30);
    q.pop();
    cout << "The front: " << endl;
    cout << q.front() << endl;
    return 0;
}
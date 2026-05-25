#include <iostream>

#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(20);
    s.push(30);
    s.pop();
    cout << "The top: " << endl;
    cout << s.top() << endl;
}
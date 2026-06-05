#include <iostream>

#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    for (int i = 0; i < 10; i++)
    {
        s.push(5 * i + 2);
        cout << s.top() << " ";
    }

    int n = s.size();
    cout << "\nThe size: " << n << endl;

    s.pop();
    cout << "The top after pop: " << endl;
    cout << s.top() << endl;
}
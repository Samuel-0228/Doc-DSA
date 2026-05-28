#include <iostream>
using namespace std;

int HandShake(int n)
{
    if (n <= 1)
        return 0;
    else
        return n - 1 + HandShake(n - 1);
}

int main()
{
    int n;
    cout << "enter the number of people: " << endl;
    cin >> n;
    cout << "the total number of handshakes is: " << HandShake(n) << endl;
}
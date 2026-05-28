#include <iostream>
using namespace std;

int mystery(int a, int b)
{
    if (b == 0)
        return 0;
    if (b % 2 == 0)
        return mystery(a + a, b / 2);
    return mystery(a + a, b / 2) + a;
}

void print(int p)
{
    if (p == 0)
        return;
    print(p - 1);
    cout << p;

    return;
}
int main()
{
    int a = 4, b = 5;
    cout << mystery(a, b) << endl;
    print(5);
}
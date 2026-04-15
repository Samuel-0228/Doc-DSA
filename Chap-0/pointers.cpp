#include <iostream>
using namespace std;

int main()
{
    int x = 42;
    int *p = &x;

    cout << "Value of x       : " << x << endl;
    cout << "Address of x (&x): " << &x << endl;
    cout << "Value of p       : " << p << " (same as &x)" << endl;
    cout << "Value *p         : " << *p << " (value at that address)" << endl;

    *p = 100;
    cout << "After *p = 100, x is: " << x << endl;

    return 0;
}
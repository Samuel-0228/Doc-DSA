#include <iostream>
using namespace std;

int power(int base, int exp)
{
    if (exp == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exp - 1);
    }
}
int main()
{
    int base, exp;
    cout << "enter the base: " << endl;
    cin >> base;
    cout << "enter the exponent: " << endl;
    cin >> exp;
    cout << base << " raised to the power of " << exp << " is " << power(base, exp) << endl;
}
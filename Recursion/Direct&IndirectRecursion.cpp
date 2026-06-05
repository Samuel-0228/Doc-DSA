#include <iostream>
using namespace std;

// ---------- Direct Recursion: factorial ----------
long long directFactorial(int n)
{
    if (n <= 1)
    { // Base case
        return 1;
    }
    return n * directFactorial(n - 1); // Function calls itself (direct recursion)
}

// ---------- Indirect Recursion: two functions calling each other ----------
long long helperB(int n); // Forward declaration

long long helperA(int n)
{
    if (n <= 0)
    { // Base case
        return 1;
    }
    return n * helperB(n - 1); // Calls helperB (indirect recursion)
}

long long helperB(int n)
{
    if (n <= 0)
    { // Base case
        return 1;
    }
    return n * helperA(n - 1); // Calls helperA (indirect recursion)
}

int main()
{
    int n;

    cout << "Enter a number for direct recursion factorial: ";
    cin >> n;
    cout << "Direct Recursion (factorial of " << n << "): "
         << directFactorial(n) << endl;

    cout << "\nEnter a number for indirect recursion (helperA call): ";
    cin >> n;
    cout << "Indirect Recursion (helperA(" << n << ")): "
         << helperA(n) << endl;

    return 0;
}
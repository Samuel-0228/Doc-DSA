#include <iostream>
using namespace std;

// ---------- Tail Recursion: accumulator passed as parameter ----------
long long tailFactorial(int n, long long result = 1)
{
    if (n <= 1)
    { // Base case
        return result;
    }
    // Recursive call is the LAST operation (tail recursion)
    return tailFactorial(n - 1, n * result);
}

// ---------- Non-Tail Recursion: work after recursive call ----------
long long nonTailFactorial(int n)
{
    if (n <= 1)
    { // Base case
        return 1;
    }
    // Multiplication happens AFTER recursive call returns (non-tail recursion)
    return n * nonTailFactorial(n - 1);
}

// Optional: trace non-tail recursion to see the call stack behavior
long long traceNonTail(int n)
{
    if (n <= 1)
    {
        cout << "traceNonTail(1) = 1" << endl;
        return 1;
    }
    long long sub = traceNonTail(n - 1);
    long long result = n * sub;
    cout << "traceNonTail(" << n << ") = " << n
         << " * traceNonTail(" << (n - 1) << ") = " << result << endl;
    return result;
}

int main()
{
    int n;

    cout << "Enter a number for tail vs non-tail recursion factorial: ";
    cin >> n;

    cout << "Tail Recursion factorial(" << n << "): "
         << tailFactorial(n) << endl;

    cout << "Non-Tail Recursion factorial(" << n << "): "
         << nonTailFactorial(n) << endl;

    cout << "\nTracing Non-Tail Recursion calls for " << n << ":" << endl;
    traceNonTail(n);

    return 0;
}
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else if (n >= 2)
        return fib(n - 1) + fib(n - 2);
}

int fibMemo(int n, int memo[])
{
    if (n == 0 || n == 1)
        return memo[n] = n;
    if (memo[n] != -1)
    {
        return memo[n];
    }
    memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
    return memo[n];
}

int fibTab(int n)
{
    if (n == 0 || n == 1)
        return n;
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    int memo[31]; // Assuming we want to calculate Fibonacci numbers up to 30
    for (int i = 0; i < 31; i++)
    {
        memo[i] = -1;
    }
    // Naive recursion
    cout << fib(0) << endl;
    cout << fib(1) << endl;
    cout << fib(2) << endl;
    cout << fib(30) << endl;

    // Memoization - Top-down approach
    cout << fibMemo(0, memo) << endl;
    cout << fibMemo(1, memo) << endl;
    cout << fibMemo(2, memo) << endl;
    cout << fibMemo(30, memo) << endl;
    cout << memo[30] << endl;
    cout << memo[20] << endl;

    // Tabulation - Buttom-up approach
    cout << fibTab(0) << endl;
    cout << fibTab(1) << endl;
    cout << fibTab(2) << endl;
    cout << fibTab(30) << endl;
}
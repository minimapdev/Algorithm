#include <iostream>
#include <vector>
using namespace std;

int dp[1000001] = {};

int Fib(int n)
{
    if (n <= 2)
        return n;
    if (dp[n] != 0)
        return dp[n];

    dp[n] = (Fib(n - 1) + Fib(n - 2)) % 15746;

    return dp[n];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    cout << Fib(n);
    return 0;
}
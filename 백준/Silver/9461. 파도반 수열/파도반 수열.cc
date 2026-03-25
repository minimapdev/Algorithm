#include <iostream>
using namespace std;
long long dp[101] = {};
long long Padoban(int n)
{
    if (n <= 3)
        return 1;

    if (dp[n] != 0)
        return dp[n];

    dp[n] = Padoban(n - 3) + Padoban(n - 2);
    return dp[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        cout << Padoban(x) << '\n';
    }
    return 0;
}
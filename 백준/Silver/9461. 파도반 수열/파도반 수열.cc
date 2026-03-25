#include <iostream>
using namespace std;
long long dp[101] = {};
long long Padoban(int n)
{
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 3] + dp[i - 2];
    }

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
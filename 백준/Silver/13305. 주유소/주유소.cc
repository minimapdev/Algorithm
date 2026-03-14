#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> roadLen(n - 1);
    vector<long long> cost(n);

    for (int i = 0; i < n - 1; i++) cin >> roadLen[i];
    for (int i = 0; i < n; i++) cin >> cost[i];

    long long ans = 0;
    long long minCost = cost[0];

    for (int i = 0; i < n - 1; i++)
    {
        if (cost[i] < minCost) minCost = cost[i];
        ans += minCost * roadLen[i];
    }

    cout << ans;
    return 0;
}
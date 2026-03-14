#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int ans = 0;
    int cur = 0, next = 1, road = 0;
    cin >> n;
    vector<int> roadLen(n - 1);
    vector<int> cost(n);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> roadLen[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    int count = n - 1;
    while (count--)
    {
        if (cost[cur] > cost[next])
        {
            ans += (roadLen[road++] * cost[cur]);
            cur++;
            next++;
        }
        else
        {
            ans += (roadLen[road++] * cost[cur]);
            next++;
        }
    }
    cout << ans;
    return 0;
}
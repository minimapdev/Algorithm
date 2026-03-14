#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int ans = 0, totalRoad = 0;
    cin >> n;
    vector<int> roadLen(n - 1);
    vector<int> cost(n);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> roadLen[i];
        totalRoad += roadLen[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    int currentRoad = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (currentRoad >= totalRoad)
            break;
        for (int j = i + 1; j < n; j++)
        {
            if (cost[i] <= cost[j])
            {
                ans += (cost[i] * roadLen[j - 1]);
                currentRoad += roadLen[j - 1];
            }
            else
            {
                ans += (cost[i] * roadLen[j - 1]);
                currentRoad += roadLen[j - 1];
                break;
            }
        }
    }

    cout << ans;
    return 0;
}
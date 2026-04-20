#include <iostream>
using namespace std;

int n;
int minValue = 1000000000;
int maxValue = -1000000000;

int arr[12];
void dfs(int idx, int cur, int plus, int minus, int mul, int div)
{
    if (idx == n)
    {
        minValue = min(minValue, cur);
        maxValue = max(maxValue, cur);
        return;
    }
    if (plus > 0)
    {
        dfs(idx + 1, cur + arr[idx], plus - 1, minus, mul, div);
    }
    if (minus > 0)
    {
        dfs(idx + 1, cur - arr[idx], plus, minus - 1, mul, div);
    }
    if (mul > 0)
    {
        dfs(idx + 1, cur * arr[idx], plus, minus, mul - 1, div);
    }
    if (div > 0)
    {
        dfs(idx + 1, cur / arr[idx], plus, minus, mul, div - 1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int plus, minus, mul, div;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> plus >> minus >> mul >> div;

    dfs(1, arr[0], plus, minus, mul, div);

    cout << maxValue << '\n' << minValue;
    return 0;
}
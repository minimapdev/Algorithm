#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int cur = v[1];
    int ans = v[1];

    for (int i = 2; i <= n; i++)
    {
        cur = max(cur + v[i], v[i]);
        ans = max(ans, cur);
    }

    cout << ans;
    return 0;
}
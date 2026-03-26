#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> x;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    while (l < r)
    {
        int temp = v[l] + v[r];

        if (temp == x)
        {
            ans++;
            l++;
            r--;
        }
        else if (temp > x)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << ans;
    return 0;
}
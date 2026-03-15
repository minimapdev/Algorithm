#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long left = 0;
    long long right = *max_element(v.begin(), v.end());
    long long ans = 0;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid < v[i])
            {
                cnt += (v[i] - mid);
            }
        }

        if (cnt >= m)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
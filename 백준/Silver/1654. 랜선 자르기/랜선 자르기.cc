#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    cin >> k >> n;

    vector<long long> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    long long left = 1;
    long long right = *max_element(v.begin(), v.end());
    long long answer = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;

        long long count = 0;
        for (int i = 0; i < k; i++)
        {
            count += v[i] / mid;
        }

        if (count >= n)
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << answer;
    return 0;
}
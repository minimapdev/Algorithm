#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int> &v, int first, int last, int target)
{
    if (first > last)
        return false;
    int mid = (first + last) / 2;

    if (v[mid] == target)
    {
        return true;
    }
    else if (v[mid] > target)
    {
        return binarySearch(v, first, mid - 1, target);
    }
    else
    {
        return binarySearch(v, mid + 1, last, target);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, temp = 0;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        if (binarySearch(v, 0, n - 1, temp))
        {
            cout << 1 << '\n';
        }
        else
            cout << 0 << '\n';
    }

    return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

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
        if (binary_search(v.begin(), v.end(), temp))
        {
            cout << 1 << '\n';
        }
        else
            cout << 0 << '\n';
    }

    return 0;
}
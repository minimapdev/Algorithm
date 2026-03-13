#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, num = 0;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int index = n - 1;
    int dim = 0;

    while (k)
    {
        if (index < 0)
            break;

        if (v[index] > k)
        {
            index--;
            continue;
        }

        k -= v[index];
        num++;
    }
    cout << num;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    int A[101][101] = {};
    int B[101][101] = {};
    int C[101][101] = {};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cin >> m >> k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int t = 0; t < m; t++)
            {
                C[i][j] += A[i][t] * B[t][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << C[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

int n;
int arr[21][21];
bool visited[21];
int minValue = 1000000000;

void dfs(int idx, int count)
{
    if (count == n / 2)
    {
        int startSum = 0;
        int linkSum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (visited[i] && visited[j])
                {
                    startSum += arr[i][j] + arr[j][i];
                }
                else if (!visited[i] && !visited[j])
                {
                    linkSum += arr[i][j] + arr[j][i];
                }
            }
        }

        minValue = min(minValue, abs(startSum - linkSum));
        return;
    }

    for (int i = idx; i < n; i++)
    {
        visited[i] = true;
        dfs(i + 1, count + 1);
        visited[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    dfs(0, 0);
    cout << minValue;
    return 0;
}
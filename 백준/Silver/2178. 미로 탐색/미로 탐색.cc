#include <iostream>
#include <queue>
#include <string>
using namespace std;

int arr[101][101] = {};
bool visited[101][101] = {};
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
int n, m;

void bfs(int r, int c)
{
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;

    while (!q.empty())
    {
        int qr = q.front().first;
        int qc = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nr = qr + dr[i];
            int nc = qc + dc[i];

            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                continue;
            if (arr[nr][nc] == 0)
                continue;
            if (visited[nr][nc])
                continue;

            q.push({nr, nc});
            visited[nr][nc] = true;
            arr[nr][nc] = arr[qr][qc] + 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);
    cout << arr[n - 1][m - 1];
    return 0;
}
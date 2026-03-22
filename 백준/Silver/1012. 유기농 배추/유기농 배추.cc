#include <algorithm>
#include <iostream>
using namespace std;

int arr[51][51] = {};
bool visited[51][51] = {};
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
int cnt = 0;
int N, M;
void Reset(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = 0;
            visited[i][j] = false;
        }
    }
    cnt = 0;
}
void dfs(int r, int c)
{
    visited[r][c] = true;

    for (int i = 0; i < 4; i++)
    {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if (nr < 0 || nr >= N || nc < 0 || nc >= M)
            continue;

        if (visited[nr][nc])
            continue;
        if (arr[nr][nc] == 0)
            continue;

        dfs(nr, nc);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> M >> N >> k;
        Reset(N, M);
        for (int j = 0; j < k; j++)
        {
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }

        for (int r = 0; r < N; r++)
        {
            for (int c = 0; c < M; c++)
            {
                if (arr[r][c] == 1 && !visited[r][c])
                {
                    dfs(r, c);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
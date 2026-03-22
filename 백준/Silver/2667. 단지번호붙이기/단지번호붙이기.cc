#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
int arr[26][26] = {};
bool visited[26][26] = {};
int n;
int cnt;
vector<int> ans;
void dfs(int r, int c)
{
    visited[r][c] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if (nr < 0 || nr >= n || nc < 0 || nc >= n)
            continue;

        if (arr[nr][nc] == 0)
            continue;

        if (visited[nr][nc])
            continue;
        dfs(nr, nc);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1 && !visited[i][j])
            {
                cnt = 0;
                dfs(i, j);
                ans.push_back(cnt);
            }
        }
    }
    sort(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (int x : ans)
    {
        cout << x << '\n';
    }

    return 0;
}
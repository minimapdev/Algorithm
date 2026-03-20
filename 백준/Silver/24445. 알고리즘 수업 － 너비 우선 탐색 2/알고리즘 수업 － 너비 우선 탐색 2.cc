#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAX = 100001;
vector<int> graph[MAX + 2];
int visited[MAX + 2];
queue<int> q;
int cnt = 0;

void bfs(int startV)
{
    visited[startV] = ++cnt;
    q.push(startV);
    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int next : graph[current])
        {
            if (visited[next] != 0)
                continue;
            visited[next] = ++cnt;
            q.push(next);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, r;
    cin >> n >> m >> r;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }
    bfs(r);

    for (int i = 1; i <= n; i++)
    {
        cout << visited[i] << '\n';
    }
    return 0;
}
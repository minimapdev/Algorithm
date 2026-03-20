#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;
vector<vector<int>> graph;
vector<int> visited;

void dfs(int v)
{
    visited[v] = ++cnt;
    for (int x : graph[v])
    {
        if (visited[x] != 0)
            continue;
        dfs(x);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, r;
    cin >> n >> m >> r;
    graph.resize(n + 1);
    visited.assign(n + 1, 0);
    for (int i = 1; i <= m; i++)
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
    dfs(r);

    for (int i = 1; i <= n; i++)
    {
        cout << visited[i] << '\n';
    }
    return 0;
}
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<int> visited;
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
            if (visited[next])
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
        sort(graph[i].begin(), graph[i].end());
    }
    bfs(r);
    for (int i = 1; i <= n; i++)
    {
        cout << visited[i] << '\n';
    }
    return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<int> order;
int cnt = 0;

void dfs(int cur)
{
    order[cur] = ++cnt;

    for (int next : graph[cur])
    {
        if (order[next] == 0)
        {
            dfs(next);
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
    order.assign(n + 1, 0);

    for (int i = 0; i < m; i++)
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

    dfs(r);

    for (int i = 1; i <= n; i++)
    {
        cout << order[i] << '\n';
    }
    return 0;
}
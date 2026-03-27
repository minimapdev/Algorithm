#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> graph;
bool visited[100001] = {};
int parent[100001] = {};

void dfs(int startV)
{
    visited[startV] = true;
    int cur = startV;
    for (int next : graph[cur])
    {
        if (visited[next])
            continue;
        parent[next] = cur;
        dfs(next);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    graph.resize(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1);

    for (int i = 2; i <= n; i++)
    {
        cout << parent[i] << '\n';
    }
    return 0;
}
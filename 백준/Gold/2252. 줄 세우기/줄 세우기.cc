#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> graph;
vector<int> inDegree;
queue<int> q;

void topology_sort()
{
    for (int i = 1; i <= n; i++)
    {
        if (inDegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';

        for (int i = 0; i < graph[cur].size(); i++)
        {
            int next = graph[cur][i];
            if (--inDegree[next] == 0)
                q.push(next);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;

    graph.resize(n + 1);
    inDegree.resize(n + 1);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        inDegree[v]++;
    }
    topology_sort();
    return 0;
}
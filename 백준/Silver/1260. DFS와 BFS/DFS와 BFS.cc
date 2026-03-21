#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> adjList[1001];
bool dfsVisitInfo[1001] = {};
bool bfsVisitInfo[1001] = {};
void dfs(int startV)
{
    dfsVisitInfo[startV] = true;
    cout << startV << ' ';

    for (int next : adjList[startV])
    {
        if (dfsVisitInfo[next])
            continue;
        dfsVisitInfo[next] = true;
        dfs(next);
    }
}
void bfs(int startV)
{
    queue<int> q;
    q.push(startV);
    bfsVisitInfo[startV] = true;
    cout << startV << ' ';

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int next : adjList[current])
        {
            if (bfsVisitInfo[next])
                continue;
            q.push(next);
            bfsVisitInfo[next] = true;
            cout << next << ' ';
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(adjList[i].begin(), adjList[i].end());
    }
    dfs(v);
    cout << '\n';
    bfs(v);
    return 0;
}
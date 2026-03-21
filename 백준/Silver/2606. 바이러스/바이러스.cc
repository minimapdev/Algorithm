#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> adjList[101];
queue<int> q;
bool visited[101] = {};
int ans = 0;

void bfs(int startV)
{
    q.push(startV);
    visited[startV] = true;
    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int next : adjList[current])
        {
            if (visited[next])
                continue;
            q.push(next);
            visited[next] = true;
            ans++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, numE;
    cin >> n >> numE;

    for (int i = 0; i < numE; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bfs(1);
    cout << ans;
    return 0;
}
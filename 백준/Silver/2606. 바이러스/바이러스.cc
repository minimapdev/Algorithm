#include <iostream>
#include <vector>
using namespace std;

vector<int> adjList[101];
bool visited[101] = {};
int ans = 0;

void dfs(int startV)
{
    visited[startV] = true;
    for (int next : adjList[startV])
    {
        if (visited[next])
            continue;
        ans++;
        dfs(next);
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
    dfs(1);
    cout << ans;
    return 0;
}
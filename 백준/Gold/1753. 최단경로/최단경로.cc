#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int INF = 987654321;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int V, E;
    cin >> V >> E;

    int startV;
    cin >> startV;

    vector<vector<pair<int, int>>> adjList(V + 1);
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
    }

    vector<int> dist(V + 1, INF);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[startV] = 0;
    pq.push({0, startV});

    while (!pq.empty())
    {
        int curDist = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        if (curDist > dist[curNode])
            continue;

        for (int i = 0; i < adjList[curNode].size(); i++)
        {
            int nextNode = adjList[curNode][i].first;
            int weight = adjList[curNode][i].second;

            if (dist[nextNode] > dist[curNode] + weight)
            {
                dist[nextNode] = dist[curNode] + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    for (int i = 1; i <= V; i++)
    {
        if (dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }

    return 0;
}
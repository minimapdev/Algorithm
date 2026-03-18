#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    priority_queue<int> pq;
    pq.push(0);

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
        {
            cout << pq.top() << "\n";
            pq.pop();
        }
        pq.push(num);
    }
    return 0;
}
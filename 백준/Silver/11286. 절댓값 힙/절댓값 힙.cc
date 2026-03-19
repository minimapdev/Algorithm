#include <iostream>
#include <queue>
using namespace std;

template <typename T> struct MinAbs
{
    bool operator()(T a, T b)
    {
        if (abs(a) != abs(b))
        {
            return abs(a) > abs(b);
        }
        return (a > b);
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, MinAbs<int>> pq;

    while (n--)
    {
        cin >> x;

        if (x == 0)
        {
            if (pq.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
        {
            pq.push(x);
        }
    }
    return 0;
}
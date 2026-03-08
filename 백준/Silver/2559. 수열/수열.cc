#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n + 1);
    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    int answer = -100000001;

    for (int i = 0; i <= n - k; i++) {
        int sum = prefix[i + k] - prefix[i];
        if (sum > answer) answer = sum;
    }

    cout << answer;
    return 0;
}
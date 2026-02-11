#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a0, c, n0;
    cin >> a1 >> a0>>c>>n0;

    if (a1 > c) {
        cout << 0;
        return 0;
    }

    int lhs = a1 * n0 + a0;
    int rhs = c * n0;

    cout << (lhs <= rhs ? 1 : 0);
    return 0;
}

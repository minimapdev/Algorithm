#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long x=0;
    long long l = 0;
    for(int i = 1; i <= n; i++){
        x += i;
        l += (i-1) * 2;
    }

    cout<< (x*4) - (2 * l);
    return 0;
}

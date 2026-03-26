#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,b;
    char c[40] = {};
    cin>>n>>b;
    int m = 0;
    long long x = 1;

    while(x*b <= n){
        x*=b;
        m++;
    }

    for(int i = 0; i<=m; i++){
        x = 1;
        for(int j = i; j < m; j++){
            x *= b;
        }
        int div = n / x;
        c[i] = (div > 9) ? (div + 55) : (div + 48);
        n %= x;
    }

    cout<<c;
    return 0;
}


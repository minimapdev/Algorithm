#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int start, end, pre, cur,x = 0,n;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>cur;
        if (i == 0) start = cur;
        else if(i == n - 1) end = cur;

        if(i != 0) x = gcd(x,cur - pre);
        pre = cur;
    }

    cout<< (end - start) / x + 1 - n;
    return 0;
} 
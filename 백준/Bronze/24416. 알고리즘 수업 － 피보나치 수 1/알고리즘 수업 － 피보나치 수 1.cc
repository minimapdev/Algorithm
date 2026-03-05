#include <iostream>
using namespace std;

int recurCallCount = 0;
int dpCallCount = 0;
int dp[41];

int RecurFib(int n){
    if(n == 1 || n == 2){
        recurCallCount++;
        return 1;
    }
    return RecurFib(n-1) + RecurFib(n-2);
}

int DpFib(int n){
    dp[1] = dp[2] = 1;
    for(int i = 3; i <= n; i++){
        dpCallCount++;               
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    RecurFib(n);
    DpFib(n);

    cout << recurCallCount << ' ' << dpCallCount;
}
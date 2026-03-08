#include<iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, l, r;
    int sum = 0;
    cin>>n>>m;
    vector<int> v(n+1);
    vector<int> rangeSum(n+1);
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }

    for(int i = 1; i <= n; i++){
        sum += v[i];
        rangeSum[i] = sum;
    }

    for(int i = 0; i < m; i++){
        cin>>l>>r;
        cout<<rangeSum[r] - rangeSum[l-1]<<'\n';
    }

    return 0;
}
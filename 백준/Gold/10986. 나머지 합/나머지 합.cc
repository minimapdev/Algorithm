#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    long long count = 0;
    cin>>n>>m;
    vector<int> v(n);
    vector<long long> arrSum(n+1);
    vector<long long> remainCount(m,0);

    for(int i = 0; i < n; i++){
        cin>>v[i];
        arrSum[i+1] = arrSum[i] + v[i];
    }

    for(int i = 0; i < arrSum.size(); i++){
        arrSum[i] %= m;
    }

    for(int i = 0; i < arrSum.size(); i++){
        remainCount[arrSum[i]]++;
    }

    for(int i = 0; i < m; i++){
        count += remainCount[i] * (remainCount[i] - 1) / 2;
    }
    cout<<count; 
    return 0;
}
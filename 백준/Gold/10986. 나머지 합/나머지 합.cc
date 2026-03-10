#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,temp,arrangeSum = 0;
    long long count = 0;
    cin>>n>>m;
    vector<long long> v(m);
    v[0] = 1;

    while(n--){
        cin>>temp;
        arrangeSum = (arrangeSum+temp) % m;
        v[arrangeSum]++;
    }

    while(m--){
        count += v[m] * (v[m]-1)/2;
    }

    cout<<count;
    return 0;
}
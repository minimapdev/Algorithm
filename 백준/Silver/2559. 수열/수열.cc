#include<iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    int sum = 0;
    cin>>n>>k;
    vector<int> v(n+1);
    vector<int> rangeSum(n+1);
    vector<int> result(n-k+1);
    for(int i = 1; i <= n; i++){
        cin>>v[i];
        sum+= v[i];
        rangeSum[i] = sum;
    }

    int max = -100000001;

    for(int i = 0; i < result.size(); i++){
        result[i] = rangeSum[k + i] - rangeSum[i];
        if(result[i] >= max){
            max = result[i];
        }
    }

    cout<<max;
    return 0;
}
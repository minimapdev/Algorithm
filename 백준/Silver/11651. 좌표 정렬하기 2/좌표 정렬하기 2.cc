#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;
    vector<pair<int,int>> v(n);

    for(int i = 0; i < n;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(), v.end(), [] (const pair<int,int>&a, const pair<int,int>&b){
        if(a.second != b.second) return a.second < b.second;
        return a.first < b.first;
    });

    for(int i = 0; i < n; i++){
        cout<<v[i].first<<' '<<v[i].second<<"\n";
    }
    return 0;
}



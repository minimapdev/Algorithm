#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;

    vector<pair<int,string>> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
    }

    stable_sort(v.begin(), v.end(),[] (const pair<int,string>&p1, const pair<int,string>&p2){
        return p1.first < p2.first;
    });

    for(int i = 0; i < n; i++){
        cout<<v[i].first<<' '<<v[i].second<<"\n";
    }
    return 0;
}



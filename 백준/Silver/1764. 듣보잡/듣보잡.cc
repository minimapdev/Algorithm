#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    unordered_set<string> s;
    vector<string> v;
    for(int i = 0; i < n+m; i++){
        string name;
        cin>>name;
        if(s.find(name) != s.end()){
            v.push_back(name);
        }
        else{
            s.insert(name);
        }
    }

    sort(v.begin(),v.end());

    cout<<v.size()<<"\n";
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<"\n";
    }

    return 0;
}
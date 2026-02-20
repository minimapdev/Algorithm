#include <iostream>
#include <algorithm>
#include <map>
#include <functional>
using namespace std;

bool cmp(const string& s1, const string& s2){
    return s1 > s2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    map<string, string, greater<string>> m;

    for(int i = 0; i < n; i++){
        string name,state;
        cin>>name>>state;
        m[name] = state;
    }

    for(auto iter = m.begin(); iter != m.end(); ++iter){
        if(iter->second == "enter"){
            cout<<iter->first<<"\n";
        }
    }
    return 0;
}
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin>>N>>M;

    map<string,int> m;
    string str;
    for(int i = 0; i < N; i++){
        cin>>str;
        if(str.size() < M) continue;
        
        if(m.find(str) != m.end()){
            m[str] += 1;
        }
        else{
            m[str] = 1;
        }
    }

    vector<pair<string,int>> v(m.begin(),m.end());
    sort(v.begin(), v.end(), [](const pair<string,int> &p1, const pair<string,int> &p2){
        if(p1.second != p2.second) return p1.second > p2.second;
        else if(p1.first.size() != p2.first.size()) return p1.first.size() > p2.first.size();
        else return p1.first < p2.first;
    });

    for(int i = 0; i < v.size(); i++){
        cout<<v[i].first<<'\n';
    }
    return 0;
}
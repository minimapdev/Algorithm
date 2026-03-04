#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> v;
vector<bool> used;

void dfs(int depth){
    if(depth == m){
        for(int x : v) cout<<x<<' ';
        cout<<'\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        if(used[i]) continue;
        used[i] = true;
        v[depth] = i;
        dfs(depth+1);
        used[i] = false;           
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    v.resize(m);
    used.resize(n+1);
    dfs(0);
    return 0;
}
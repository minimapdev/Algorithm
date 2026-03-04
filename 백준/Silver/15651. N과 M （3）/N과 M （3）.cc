#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> v;

void dfs(int depth){
    if(depth == m){
        for(int x : v) cout<<x<<' ';
        cout<<'\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        v[depth] = i;
        dfs(depth+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    v.resize(m);
    dfs(0);
    return 0;
}
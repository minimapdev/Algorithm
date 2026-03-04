#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> v;
void dfs(int start, int depth){
    if(depth == m){
        for(int x : v) cout<<x<<' ';
        cout<<'\n';
        return;
    }

    for(int i = start; i <= n; i++){
        v[depth] = i;
        dfs(i,depth+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    v.resize(m);
    dfs(1,0);
    return 0;
}
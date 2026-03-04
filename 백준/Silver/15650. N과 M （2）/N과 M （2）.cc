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
        v.push_back(i);
        dfs(i+1, depth+1);
        v.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    dfs(1,0);
    return 0;
}
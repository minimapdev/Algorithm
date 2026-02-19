#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[20000001] = {};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        a[x+10000000] = 1;
    }

    cin>>m;
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        cout<<a[x+10000000]<<' ';
    }

    return 0;
}
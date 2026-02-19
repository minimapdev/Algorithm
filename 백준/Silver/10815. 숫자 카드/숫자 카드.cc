#include <iostream>
#include <bitset>
using namespace std;

bitset<200000001> b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        b[x+10000000] = 1;
    }

    cin>>m;
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        cout<<b[x+10000000]<<' ';
    }

    return 0;
}
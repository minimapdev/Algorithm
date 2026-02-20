#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v(20000001,0);
    int n,m;
    cin>>n;

    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        v[num+10000000]++;
    }

    cin>>m;

    for(int i = 0; i < m; i++){
        int num;
        cin>>num;
        cout<<v[num+10000000]<<' ';
    }
    return 0;
}
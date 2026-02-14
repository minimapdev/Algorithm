#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    int v;
    int a[100001] = {};
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>v;
        a[v]++;
    }

    for(int i = 0; i < 100001; i++){
        if(a[i]){
            while(a[i]--){
                cout<<i<<"\n";
            }
        }
    }
    return 0;
}

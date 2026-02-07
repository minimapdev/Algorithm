#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k, i = 1;
    int a[10000] = {};
    cin>>n>>k;

    for(int j = 1; j <= n; j++){
        if(n%j == 0){
            a[i] = j;
            i++;
        }
    }

    cout<<a[k];
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    long long result;
    cin>>n;

    for(int j = 0; j < n; j++){
        result = 1;
        cin>>x>>y;
        for(long long i = 1; i <= x; i++){
            result = result * (y-x+i) / i;
        }
        cout<<result<<'\n';
    }
    return 0;
}
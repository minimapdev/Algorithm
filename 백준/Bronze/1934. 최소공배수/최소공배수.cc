#include<iostream>
#include<vector>
using namespace std;

int gdc(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a,b;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>a>>b;
        cout<<(a*b) / gdc(a,b)<<"\n";
    }

    return 0;
}
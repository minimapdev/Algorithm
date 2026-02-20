#include<iostream>
#include<vector>
using namespace std;

int GetLCM(int big, int small){

    int i = 1;
    int lcm = 1;
    while(lcm < big * small){
        lcm = big * i;
        i++;
        if(lcm % small == 0) break;
    }

    return lcm;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a,b;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>a>>b;
        cout<<(a > b ? GetLCM(a,b) : GetLCM(b,a))<<"\n";
    }

    return 0;
}
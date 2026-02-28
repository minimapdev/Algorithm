#include<iostream>
using namespace std;

int main(){
    int n,x = 1;
    cin>>n;

    while(n--){
        x *= 2;
    }

    cout<<x;
    return 0;
}
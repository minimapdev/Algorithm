#include<iostream>
using namespace std;

int main(){
    int n,k, result= 1;
    cin>>n>>k;

    for(int i = 1; i <= k; i++){
        result = result * (n-k+i) / i;
    }
    cout<<result;
    return 0;
}
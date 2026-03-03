#include<iostream>
using namespace std;
long long Factorial(long long n){
    if(n == 0) return 1;
    return n * Factorial(n-1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    cout<<Factorial(n);
    return 0;
}
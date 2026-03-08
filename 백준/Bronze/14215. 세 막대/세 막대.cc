#include <iostream>
using namespace std;

bool IsValid(int a, int b, int c){
    if(a+b <= c || a+c <= b || b+c <= a){
        return false;
    }
    return true;
}

void GetMaxLength(int a, int b, int c){
    if(a > b && a > c){
        a -= a - (b+c) + 1;
        cout<<a+b+c;
    }
    else if(b > a && b > c){
        b -= b - (a+c) + 1;
        cout<<a+b+c;
    }
    else{
        c -= c - (a+b) + 1;
        cout<<a+b+c;
    }
}

int main(){
        
    int a,b,c;
    cin>>a>>b>>c;
    if(IsValid(a,b,c)){
        cout<<a+b+c;
    }
    else{
        GetMaxLength(a,b,c);
    }
    return 0;
}


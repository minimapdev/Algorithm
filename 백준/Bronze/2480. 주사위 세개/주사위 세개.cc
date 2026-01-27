#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    int result;

    cin>>A>>B>>C;

    if(A==B && B==C){
        result = 10000 + A*1000;
    }
    else if((A==B || A==C || B==C)){
        result = 1000 + (A==B ? A : C) * 100;
    }
    else{
        result = ((A>B)? (A>C? A:C) : (B>C? B:C)) * 100;
    }

    cout<<result<<endl;
}
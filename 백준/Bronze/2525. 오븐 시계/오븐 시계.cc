#include <iostream>
using namespace std;

int main(){
    int A,B,minuite;
    cin>>A>>B>>minuite;

    A =  (A + ((B + minuite) / 60)) % 24;
    B = (B + minuite) % 60;

    cout<<A<<' '<<B<<endl;
}
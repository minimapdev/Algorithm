#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int A, B;

    do{
        cin>>A>>B;

        if(A!=0 && B!= 0){
            cout<<A+B<<"\n";
        }

    }while(A!= 0 && B!= 0);

    return 0;
}

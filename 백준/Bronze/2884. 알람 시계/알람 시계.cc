#include <iostream>
using namespace std;

int main(){
    int hour, minuite;
    cin>>hour>>minuite;

    if(minuite < 45){
        minuite = minuite + 15;
        if(hour == 0){
            hour = 23;
        }
        else{
            hour--;
        }
    }
    else{
        minuite -= 45;
    }

    cout<<hour<<" "<<minuite<<endl;
}
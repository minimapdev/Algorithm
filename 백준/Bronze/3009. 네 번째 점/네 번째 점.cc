#include <iostream>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x[3],y[3];
    int a,b;
    for(int i = 0; i < 3; i++){
        cin>>a>>b;  
        x[i] = a;
        y[i] = b;
    }

    cout<< (x[0] == x[1] ? x[2] : (x[0] == x[2] ? x[1] : x[0]))<<' '<<(y[0] == y[1] ? y[2] : (y[0] == y[2] ? y[1] : y[0]));
    return 0;
}
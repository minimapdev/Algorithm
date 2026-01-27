#include <iostream>
using namespace std;

int main(){
    int X, N = 0;
    int a, b = 0;
    int sum = 0;
    cin >> X >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;
        sum += a*b;
    }

    if(X == sum){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
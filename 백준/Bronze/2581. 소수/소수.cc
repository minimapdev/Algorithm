#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;
    int result = 0;
    int min = 0;
    cin>>m>>n;
    bool isMin = true;

    for(int i = m; i <= n; i++){
        bool isPrime = true;
        for(int j = 2; j < i; j++){
            if(i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime && i != 1){
            result += i;
            if(isMin){
                min = i;
                isMin = false;
            }
        }
    }

    if(result == 0){
        cout<<-1;
    }
    else{
        cout<< result<<"\n"<<min;
    }
    return 0;
}
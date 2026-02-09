#include <iostream>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int a[1000] = {};
    int index = 0;
    cin>>n;

    for(int i = 1; i <= n; i++){
        bool isPrime = true;
        if(n % i == 0){
            for(int j = 1; j < i; j++){
                if(i% j == 0 && j != 1){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && i != 1){
                a[index++] = i;
            }
        }
    }

    index = 0;

    for(int i = 0; n>1; i++){
        if(n % a[index] != 0){
            index++;
        }
        n /= a[index];

        cout<<a[index]<<"\n";
    }
    return 0;
}
#include <iostream>
#include <vector>
#define MAX 1000001
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;

    vector<bool> isPrime(MAX,true);
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i * i < MAX; i++){
        if(isPrime[i]){
            for(int j = i * i; j < MAX; j += i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = 0; i < n; i++){
        int count = 0;
        cin>>x;

        for(int j = 2; j <= x / 2; j++){
            if(j != 2 && j%2 ==0) continue;

            if(isPrime[j]){
                if(isPrime[x-j]){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
} 
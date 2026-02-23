#include <iostream>
#include <vector>
#define MAX 246912

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    bool isPrime[MAX +1];

    for(int i = 0; i <= MAX; i++){
        isPrime[i] = true;
    }
    isPrime [0] = isPrime[1] = false;

    for(int i = 2; i * i <= MAX; i++){
        if(isPrime[i]){
            for(int j = i* i; j <= MAX; j+=i){
                isPrime[j] = false;
            }
        }
    }

    int n;
    while(std::cin>>n, n){
        int count = 0;
        for(int i = n + 1; i <= 2 * n; i++){
            if(isPrime[i]) count++;
        }
        std::cout<<count<<"\n";
    }

    return 0;
} 
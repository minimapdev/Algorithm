#include <iostream>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;

    while(std::cin>>n,n){
        int count = 0;
        std::vector<bool> isPrime(2 * n + 1,true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= 2 * n; i++){
            if(isPrime[i]){
                for(int j = i * i; j <= 2 * n; j+=i){
                    isPrime[j] = false;
                }
            }
        }

        for(int i = n+1; i <= 2 * n; i++){
            if(isPrime[i]) count++;
        }
        std::cout<<count<<"\n";
    }

    return 0;
} 
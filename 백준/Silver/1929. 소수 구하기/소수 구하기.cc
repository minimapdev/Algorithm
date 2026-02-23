#include <iostream>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,m;
    std::cin>>n>>m;

    std::vector<bool> isPrime(m+1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for(long long i = 2; i * i <= m; i++){
        if(isPrime[i]){
            for(long long j = i * i; j <= m; j += i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = n; i <= m; i++){
        if(isPrime[i]) std::cout<<i<<"\n";
    }

    return 0;
} 
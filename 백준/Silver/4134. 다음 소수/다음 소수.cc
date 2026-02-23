#include <iostream>

bool isPrime(long long x){
    if(x < 2) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;

    for(int i = 3; i <= x / i; i+=2){
        if(x%i ==0)return false;
    }
    return true;
}

long long getMinPrime(long long x){
    if (x <= 2) return 2;
    if(x % 2 == 0) x++;

    while(!isPrime(x)) x+= 2;
    return x;
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n;
    std::cin>>n;

    for(long long i = 0; i < n; i++){
        long long x;
        std::cin>>x;
        std::cout<<getMinPrime(x)<<"\n";
    }
    return 0;
} 
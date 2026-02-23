#include <iostream>

bool isPrime(int x){
    if(x < 2) return false;
    if(x == 2) return true;
    if(x % 2 ==0) return false;

    for(int i = 3; i * i <= x; i+=2){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,m;
    std::cin>>m>>n;

    for(int i = m; i <= n; i++){
        if(isPrime(i)) std::cout<<i<<"\n";
    }

    return 0;
} 
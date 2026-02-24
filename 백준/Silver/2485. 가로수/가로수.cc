#include <iostream>
#include <vector>

int gcd(int a, int b){
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,x = 0,temp = 0, count = 0;
    std::cin>>n;
    std::vector<int> v(n-1);

    for(int i = 0; i < n; i++){
        temp = x;
        std::cin>>x;
        if(i != 0) {
            v[i-1] = x - temp;
        }
    }
    
    int num = v[0];

    for(int i = 0; i < v.size(); i++){
        num = gcd(num, v[i]);
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] / num != 1){
            count+= v[i] / num - 1;
        }
    }

    std::cout<<count;
    return 0;
} 
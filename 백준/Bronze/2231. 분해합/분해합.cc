#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int digits(long long x){
    int d = 0;

    while(x>0){
        d++;
        x/=10;
    }

    return d;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n,i;
    bool found = false;
    cin>>n;

    int d = digits(n);
    long long start = n - 9 * d;
    if (start < 1) start = 1;


    for(i = start; i < n; i++){
        long long temp = i;
        long long sum = i;

        while(temp>0){
            sum+=temp%10;
            temp /= 10;
        }

        if(sum == n) {
            found = true;
            break;
        }
    }

    cout<<(found? i : 0);
    return 0;
}



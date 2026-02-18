#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;

    long long num = 0;
    bool found = false;
    for(int i = 0; i < n; i++){
        num++;
        long long x = num + (num / 1000000) + (num % 1000000 / 100000) + (num % 100000 / 10000) + (num % 10000 / 1000) + (num % 1000 / 100) + (num % 100 / 10) + (num % 10);

        if(n == x) {
            found = true;
            break;
        }
    }

    cout<<(found ? num : 0);
    return 0;
}



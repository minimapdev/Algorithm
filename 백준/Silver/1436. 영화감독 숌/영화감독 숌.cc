#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int count = 0;
    long long x = 0;

    while(true){
        x++;
        long long temp = x;
        bool found = false;
        
        while(temp > 0){
            if(temp % 1000 == 666){
                found = true;
                break;
            }
            temp/=10;
        }
        if(found) count++;
        if(count == n) break;
    }

    cout<<x;

    return 0;
}



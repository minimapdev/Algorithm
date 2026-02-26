#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int count = 0;

    for(int i = 1; i * i <= n; i++){
        if(i * i <= n){
            count++;
        }
    }
    cout<<count;

    return 0;
}
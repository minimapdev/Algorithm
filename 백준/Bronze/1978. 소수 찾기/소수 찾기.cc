#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, count = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin>>k;
        int x = 0;

        for(int j = 1; j <= k; j++){
            if(k % j == 0){
                x++;
            }
        }

        if(x == 2){
            count++;
        }
    }

    cout<<count;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long m;
    long long a[100];
    cin>>n>>m;
    long long close = 0;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j <n; j++){
            for(int k = j+1; k < n;  k++){
                if(a[i]+a[j]+a[k] <= m){
                    if(close <= a[i]+a[j]+a[k]){
                        close = a[i]+a[j]+a[k];
                    }
                }
            }
        }
    }

    cout<<close;
    return 0;
}

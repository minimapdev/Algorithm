#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    vector<int> v(10);
    cin>>n;

    int a = n,x=1;
    while(a/10){
        a /= 10;
        x++;
    }

    for(int i = 0; i < x; i++){
        int b = 1;
        for(int j = i; j < x-1; j++){
            b *= 10; 
        }
        v[i] = n / b;
        n %= b;
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < x; i++){
        cout<<v[i];
    }
    return 0;
}

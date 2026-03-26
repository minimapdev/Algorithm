#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int x= 1;
    cin>>N;

    for(int i = 1; i <= N; i++){
        x *= 2;
    }

    cout<<(x+1) * (x+1);

    return 0;
}


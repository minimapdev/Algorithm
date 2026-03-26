#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int x = 1, i = 0, d = 0;
    cin>>N;

    while(1){
        x += (6 *i);
        i++;
        d++;
        if(x >= N) break;
    }

    cout<<d;

    return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int b, sum = 0;
    char n[36];

    cin>>n>>b;
    for(int i = 0; n[i]; i++){
        sum = sum * b + (n[i] >= 65 ? n[i] - 55 : n[i] - 48);
    }

    cout<< sum;
    
    return 0;
}
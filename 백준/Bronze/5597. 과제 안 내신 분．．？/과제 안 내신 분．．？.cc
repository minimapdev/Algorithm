#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[30] = {};
    bool seen[30] = {};

    for(int i = 0; i < 28; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 28; j++){
            if(arr[j] == i+1){
                seen[i] = true;
            }
        }
    }

    for(int i = 0; i < 30; i++){
        if(seen[i] == false){
            cout<<i+1<<' ';
        }
    }

    return 0;
}
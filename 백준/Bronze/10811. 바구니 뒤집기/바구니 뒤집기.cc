#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    int arr[102] ={};
    cin>>N>>M;

    for(int i = 1; i <=N; i++){
        arr[i] = i;
    }

    while(M--){
        int I,J;

        cin>>I>>J;
        int l = I, r = J;

        while(l < r){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }

    for(int i = 1; i <= N; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
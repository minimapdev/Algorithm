#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    int I,J;
    int temp = 0;
    cin>>N>>M;

    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        arr[i] = i+1;
    }

    for(int i = 0; i < M; i++){
        cin>>I>>J;
        temp = arr[I-1];
        arr[I-1] = arr[J-1];
        arr[J-1] = temp;
    }

    for(int i = 0; i < N; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}
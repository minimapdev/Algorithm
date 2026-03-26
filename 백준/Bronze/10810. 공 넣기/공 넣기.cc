#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    int start,end,num;

    cin>>N>>M;
    vector<int> arr(N);

    for(int i = 0; i < M; i++){
        cin>>start>>end>>num;

        for(int j = start -1; j < end; j++){
            arr[j] = num;
        }
    }

    for(int i = 0; i < N; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}
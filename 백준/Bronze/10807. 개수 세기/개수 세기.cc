#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N, V;
    int * arr;
    int count = 0;

    cin >> N;
    arr = new int[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    
    cin>>V;

    for(int i = 0; i < N; i++){
        if(arr[i] == V){
            count++;
        }
    }

    cout<<count<<endl;

    delete[] arr;
    return 0;
}
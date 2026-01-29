#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int max, index;
    vector<int> arr(9);

    for(int i = 0; i < 9; i++){
        cin>>arr[i];
    }

    max = arr[0];
    index = 0;

    for(int i = 0; i < 9; i++){
        if(arr[i] >= max){
            max = arr[i];
            index = i+1;
        }
    }

    cout<<max<<"\n"<<index<<"\n";

    return 0;
}
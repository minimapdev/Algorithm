#include <iostream>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    int min =0,max =0;
    std::cin>>N;

    std::vector<int> arr(N);

    for(int i = 0; i < N; i++){
        std::cin>>arr[i];
    }

    min = arr[0];
    max = arr[0];

    for(int i = 0; i < N; i++){
        if(arr[i] <= min){
            min = arr[i];
        }
        else if(arr[i] >= max){
            max = arr[i];
        }
    }

    std::cout<<min<<' '<<max<<"\n";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int count = -1;
    cin>>n;
    long long min = 1000000;
    bool can = false;
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= 1667; j++ ){
            if(5 * i + 3 * j == n){
                can = true;
                count = i+j;

                if(min >= count){
                    min = count;
                }
            }
        }
    }
    
    if(can){
        cout<<min;
    }
    else{
        cout<<-1;
    }
    return 0;
}

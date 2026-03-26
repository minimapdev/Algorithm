#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A[9][9];
    for(int i = 0; i < 81; i++){
        cin>>A[i/9][i%9];
    }
    int max = A[0][0];
    int index;
    for(int i =0;i < 81; i++){
        if(A[i/9][i%9] >= max){
            max = A[i/9][i%9];
            index = i;
        }
    }

    cout<<max<<'\n'<<index/9 +1<<' '<<index%9 +1;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    char c[50][50] = {};
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>c[i][j];
        }
    }

    int count = 1500000;
    
    for(int i = 0; i <= n-8; i++){
        for(int j = 0; j <= m-8; j++){
            int w = 0;
            int b = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if((l+k) %2 ==0){
                        if(c[i+k][j+l] != 'W') w++;
                        if(c[i+k][j+l] != 'B') b++;
                    }
                    else{
                        if(c[i+k][j+l] != 'B') w++;
                        if(c[i+k][j+l] != 'W') b++;
                    }
                }
            }
            count = min(count,min(w,b));
        }
    }

    cout<< count;
    return 0;
}



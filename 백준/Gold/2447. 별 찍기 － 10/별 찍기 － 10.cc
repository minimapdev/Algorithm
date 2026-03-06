#include <iostream>
using namespace std;

char c[5128][5128] = {};

void DrawStar(int x, int y,int n){
    if(n == 3){
        for(int i = x; i < x+3; i++){
            for(int j = y; j < y+3; j++){
                if(i % 3 == 1 && j % 3 == 1){
                    continue;
                }
                else{
                    c[i][j] = '*';
                }
            }
        }
        return;
    }

    int size = n / 3;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == 1 && j == 1){
                continue;
            }
            DrawStar(x+i*size, y+j*size,size);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j=0; j < n; j++){
            c[i][j] = ' ';
        }
    }

    DrawStar(0,0,n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<c[i][j];
        }
        cout<<'\n';
    }
    
    return 0;
}
#include <iostream>
#include<cmath>
using namespace std;
int n, num = 0;
int queen[15] = {};

void NQueen(int row){
    if(n == row){
        num++;
        return;
    }

    for(int col = 0; col < n; col++){
        bool canPlace = true;

        for(int i = 0; i < row; i++){
            if(queen[i] == col) {
                canPlace = false;
                break;
            }

            if((row - i) == abs(col - queen[i])){
                canPlace = false;
                break;
            }
        }

        if(canPlace){
            queen[row] = col;
            NQueen(row + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    NQueen(0);
    cout<<num;
    return 0;
}
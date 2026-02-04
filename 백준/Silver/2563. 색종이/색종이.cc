#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,X,Y;
    int A[100][100] = {0};
    cin>>N;

    for(int i = 0; i < N; i++){
        cin>>X>>Y;

        for(int x = X; x <= X+9; x++){
            for(int y = Y; y <= Y+9; y++){
                A[y][x] = 1;
            }
        }
    }

    int sum = 0;

    for(int i = 0; i < 10000; i++){
        sum += A[i/100][i%100];
    }

    cout<<sum;
    return 0;
}

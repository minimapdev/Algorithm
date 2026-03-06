#include <iostream>
using namespace std;
char arr[1000] = {};
void HanoiTower(int n, int from, int by, int to){
    if(n == 1){
        cout<<from<<' '<<to<<'\n';
        return;
    }

    HanoiTower(n-1, from, to, by);
    cout<<from<<' '<<to<<'\n';
    HanoiTower(n-1, by, from, to);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k = 1;
    cin>>n;
    int x = n;

    while(x--){
        k *= 2;
    }
    cout << k - 1<<'\n';
    HanoiTower(n,1,2,3);
    return 0;
}
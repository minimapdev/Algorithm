#include<iostream>
#include<vector>
using namespace std;

void Cantor(vector<char>& v, int left, int right){
    int len = right - left;
    if (len < 3) return;

    int third = len / 3;

    for (int i = left + third; i < left + 2*third; i++){
        v[i] = ' ';
    }

    Cantor(v, left, left + third);
    Cantor(v, left + 2*third, right);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    vector<char> v;
    while(cin>>n){
        x = 1;
        while(n--){
            x *= 3;
        }
        v.resize(x, '-');
        Cantor(v,0,x);
        for(char c : v) cout<<c;
        cout<<'\n';
    }
    return 0;
}
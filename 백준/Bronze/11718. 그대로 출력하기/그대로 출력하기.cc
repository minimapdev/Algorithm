#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;

    for(int i = 0; i < 100; i++){
        getline(cin,s);
        cout<<s<<'\n';
    }
}
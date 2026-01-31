#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S;
    getline(cin,S);

    int count = 0;

    for(int i = 0; i < S.size(); i++){
        if(S[i] != ' ' && (i == 0 || S[i-1] == ' ')){
            count ++;
        }
    }

    cout<<count<<'\n';
}
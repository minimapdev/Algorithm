#include<iostream>
using namespace std;

int arr[200001][26] = {};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int q, l , r;
    char c;
    cin>>s>>q;

    int len = s.size();
    for(int i = 0; i < len; i++){
        if(i > 0){
            for(int j = 0; j < 26; j++){
                arr[i][j]+= arr[i-1][j];
            }
        }
        arr[i][s[i]-97] ++;
    }
    
    for(int i = 0; i < q; i++){
        cin>>c>>l>>r;
        if(l==0){
            cout<<arr[r][c-97]<<'\n';
        }
        else{
            cout<<arr[r][c-97] - arr[l-1][c-97]<<'\n';
        }
        
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, count = 0;
    char s[101];
    cin>>N;

    for(int i = 0; i < N; i++){
        cin>>s;
        int d[26] = {};
        bool sequence = true;

        d[s[0] - 97]++;
        for(int j = 0; s[j]; j++){
            if(j > 0){
                if (s[j-1] != s[j]) d[s[j]-97]++;
            }
        }

        for(int k = 0; k < 26; k++){
            if(d[k] > 1){
                sequence = false;
            }
        }

        if(sequence) count++;
    }

    cout<<count++;

    return 0;
}
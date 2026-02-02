#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int a[26] = {};
    cin>>s;

    for(size_t i = 0; i < s.size(); i++){
        if(s[i] >= 97){
            a[s[i]- 97]++;
        }
        else{
            a[s[i] - 65]++; 
        }
    }

    int most = -1;
    int mostIndex = 0;
    bool dup = false;

    for(int i = 0; i < 26; i++){
        if(a[i] > most){
            most = a[i];
            mostIndex = i;
            dup = false;
        }
        else if(a[i] == most){
            dup = true;
        }
    }

    cout << (dup ? '?' : char(mostIndex + 65));
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int a[26] = {};
    cin>>s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97){
            a[s[i]- 97]++;
        }
        else{
            a[s[i] - 65]++; 
        }
    }

    int max = a[0];
    int maxIndex = 0;
    int maxCount = 0;

    for(int i = 0; i < 26; i++){
        if(a[i] >= max){
            max = a[i];
            maxIndex = i;
        }
    }

    for(int i = 0; i < 26; i++){
        if(a[i] == max){
            maxCount++;
        }
    }

    if(maxCount == 1){
    printf("%c", maxIndex + 65);
    }
    else{
        printf("?");
    }
    return 0;
}
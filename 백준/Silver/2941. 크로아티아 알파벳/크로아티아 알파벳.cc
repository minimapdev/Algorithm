#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[101];
    int i = 0;
    int count = 0;
    scanf("%s", s);

    for(int i = 0; i < strlen(s); i++){
        if(s[i] != '=' && s[i] != '-'){
            count++;
        }

        if(s[i] == 'j' && i > 0){
            if(s[i-1] == 'l' || s[i-1] == 'n'){
                count--;
            }
        }

        if(s[i] == 'z' && i > 0 && i != strlen(s)-1){
            if(s[i-1] == 'd' && s[i+1] == '='){
                count--;
            }
        }
    }

    printf("%d", count);
    return 0;
}
#include<ios>
int main(){
    char s[101];
    int count = 0;
    int len = 0;

    scanf("%s", s);
    while(s[len] != '\0'){
        len++;
    }

    int l = 0, r = len-1;

    while(l<r){
        if(s[l] == s[r]){
            count++;
        }
        l++;
        r--;
    }

    printf("%d", count==(len/2));

    return 0;
}
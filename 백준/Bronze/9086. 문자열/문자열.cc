#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[999];
    int T;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%s", s);
        printf("%c%c\n", s[0],s[strlen(s)-1]);
    }
    
    return 0;
}
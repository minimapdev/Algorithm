#include <ios>

int main(){

    int T;
    scanf("%d", &T);

    while(T--){
        int R;
        char S[21];

        scanf("%d %s", &R, &S);

        for(int i = 0; i < S[i] !='\0'; i++ ){

            for(int j = 0; j < R; j++){
                putchar(S[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
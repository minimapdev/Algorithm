#include <ios>

int main(){
    int N;
    int sum = 0;
    char s[101];
    scanf("%d %s", &N,s);

    for(int i = 0; i < N; i++){
        sum += (s[i]-'0');
    }

    printf("%d", sum);
    return 0;
}
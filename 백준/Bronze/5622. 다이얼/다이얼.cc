#include<cstdio>

int main(){
    int arr[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    char s[16];
    int sum = 0;
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++){
        sum += arr[s[i] - 'A'] +1;
    }

    printf("%d", sum);
    return 0;
}



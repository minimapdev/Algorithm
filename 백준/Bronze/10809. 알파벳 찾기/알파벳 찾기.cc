#include <ios>

int main(){
    char S[99];
    int arr[26];
    int i = 0;
    scanf("%s", S);

    for(int i = 0; i < 26; i++){
        arr[i] = -1;
    }

    while(S[i] != '\0'){
        if(arr[S[i]-97] == -1){
            arr[S[i] - 97] = i;
        }
        i++;
    }

    for(int i = 0; i < 26; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
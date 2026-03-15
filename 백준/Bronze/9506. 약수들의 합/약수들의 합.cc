#include <iostream>
using namespace std;

int main(){

    int n;

    while(scanf("%d", &n), n != -1){
        int result = 0;
        int count = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                result += i;
                count++;
            }
        }

        if(result == n){
            printf("%d =", n);
            for(int i = 1; i < n; i++){
                if(n%i == 0){
                    printf(" %d", i);
                    count--;

                    if(count != 0){
                        printf(" +");
                    }
                }
            }
            printf("\n");
        }
        else{
            printf("%d is NOT perfect.\n", n);
        }
    }

    return 0;
}
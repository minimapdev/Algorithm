#include<ios>
int main(){
    int a[6] = {1,1,2,2,2,8};
    int d;
    for(int i = 0; i < 6; i++){
        scanf("%d", &d);
        printf("%d ", a[i]- d);
    }
}
#include <ios>

int main(){

    int a,b,v;
    scanf("%d %d %d", &a,&b,&v);

    int days = ((v-b) + (a-b-1)) / (a-b);

    printf("%d",days);

    return 0;
}


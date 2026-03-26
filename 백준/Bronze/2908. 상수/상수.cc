#include <ios>

int main(){
    char A[4];
    char B[4];
    int numA, numB;
    char temp;

    scanf("%s %s", A,B);

    temp = A[0];
    A[0] = A[2];
    A[2] = temp;

    temp = B[0];
    B[0] = B[2];
    B[2] = temp;
    
    numA = (A[0]- '0')*100 + (A[1] - '0') * 10 + (A[2] - '0');
    numB = (B[0]- '0')*100 + (B[1] - '0') * 10 + (B[2] - '0');

    if(numA > numB){
        printf("%s", A);
    }
    else{
        printf("%s",B);
    }

    return 0;
}
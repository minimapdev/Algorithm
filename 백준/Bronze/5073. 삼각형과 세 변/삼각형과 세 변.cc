#include <iostream>
using namespace std;

bool IsValid(int a, int b, int c){
    if(a >= b && a >= c){
        if(a >= b+c) return false;
        else return true;
    }
    else if(b >= a && b >= c){
        if(b >= a+c) return false;
        else return true;
    }
    else if( c >= a && c >= b){
        if(c >= a+b) return false;
        else return true;
    }
    return false;
}

void Judge(int a, int b, int c){
    if(a == b && b == c){
        printf("Equilateral\n");
    }
    else if(a == b || b == c || a == c){
        printf("Isosceles\n");
    }
    else{
        printf("Scalene\n");
    }
}

int main(){
        
    int a,b,c;

    while(scanf("%d%d%d", &a,&b,&c), !(a+b+c == 0)){
        if(IsValid(a,b,c)){
            Judge(a,b,c);
        }
        else{
            printf("Invalid\n");
        }
    }
    return 0;
}


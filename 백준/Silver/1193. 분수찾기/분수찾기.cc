#include <iostream>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,n = -1,m = 0;
    cin>>x;

    for(int i = 0; x > 0; i++){
        x -= i;
        n++;

        if(x>0){
            m = x;
        }
    }

    int a,b;

    if(n %2 !=0){
        a = 1, b = n;
        for(int i = 1; i < m; i++){
            a++;
            b--;
        }
    }
    else{
        a = n, b = 1;
        for(int i = 1; i < m; i++){
            a--;
            b++;
        }
    }

    cout<<b<<'/'<<a;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q,d,n,p;
    int T,C;

    cin>>T;

    for(int i = 0; i < T; i++){
        cin>>C;
        int result = C * 10;

        q = result / 250;
        d = (result % 250) / 100;
        n = (result % 250 % 100) / 50;
        p = (result % 250 % 100 % 50) / 10;

        cout<<q<<' '<<d<< ' '<<n<<' '<<p<<'\n';
    }
    return 0;
}
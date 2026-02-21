#include<iostream>
#include<vector>
using namespace std;

int gdc(int a,int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int lcm = (b * d / gdc(b,d));
    int num = (((lcm / b) * a) + ((lcm / d) * c));
    int last = gdc(lcm,num);

    cout<<num/last<<' '<<lcm/last;
    return 0;
}
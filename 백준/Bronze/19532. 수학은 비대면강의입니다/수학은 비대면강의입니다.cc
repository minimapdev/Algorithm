#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    cout<<(c*e-f*b) / (a*e - b*d)<<' '<<(c*d-a*f)/(b*d-a*e);
    return 0;
}

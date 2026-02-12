#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int count = 0;
    cin>>n;

    while(n>=0){
        if(n % 5 == 0){
            count += n / 5;
            cout<<count;
            return 0;
        }

        n -= 3;
        count++;
    }

    cout<<-1;
    return 0;
}

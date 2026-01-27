#include <iostream>
using namespace std;

int main(){
    int N;
    int count = 0;
    cin >> N;

    count = N / 4;

    for(int i = 0; i < count; i++){
        cout<<"long ";
    }
    cout<<"int"<<endl;
    return 0;
}
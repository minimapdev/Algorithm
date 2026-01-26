#include <iostream>
using namespace std;

int main() {
    int A,B;
    int third, fourth, fifth, sixth;

    cin>>A>>B;
    
    third = A*(B%10);
    fourth = A*((B%100) / 10);
    fifth = A*((B/100));
    sixth = (fifth * 100) + (fourth * 10) + third;

    cout<<third<<endl;
    cout<<fourth<<endl;
    cout<<fifth<<endl;
    cout<<sixth<<endl;
    return 0;
}

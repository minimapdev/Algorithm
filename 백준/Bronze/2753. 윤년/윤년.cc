#include <iostream>
using namespace std;

int main(){
    int year;
    bool isLeapYear;
    cin>>year;
    
    isLeapYear = ((year%4==0) && ((year %100 != 0) ||(year % 400 == 0)));

    cout<<isLeapYear<<endl;
}
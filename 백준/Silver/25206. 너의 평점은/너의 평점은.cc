#include <iostream>
#include <iomanip>
using namespace std;

double grade(string s){
    if(s == "A+")    {
        return 4.5;
    }
    else if(s == "A0"){
        return 4.0;
    }
    else if(s == "B+"){
        return 3.5;
    }
    else if(s == "B0"){
        return 3.0;
    }
    else if(s == "C+"){
        return 2.5;
    }
    else if(s == "C0"){
        return 2.0;
    }
    else if(s == "D+"){
        return 1.5;
    }
    else if(s == "D0"){
        return 1.0;
    }
    else {
        return 0.0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string subject;
    double d;
    double result = 0;
    string s;
    double sum = 0;

    for(int i = 0; i < 20; i++){
        cin>>subject>>d>>s;
        result += (grade(s) * d);
        if(s != "P"){
        sum += d;
        }
    }

    cout<<fixed<<setprecision(5)<<result / sum;

    return 0;
}


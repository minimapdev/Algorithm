#include <iostream>
#include <unordered_map>
using namespace std;

bool isDigit(const string& s){
    if(s[0] >= '0' && s[0] <= '9') return true;
    else return false;
}

int changeStringToInt(const string& s){
    int x = 1;
    int num = 0;
    for(int i = 1; i < s.size(); i++){
        x *= 10;
    }

    for(int i = 0; i < s.size(); i++){
        num += (s[i] - '0') * x;
        x /= 10;
    }

    return num;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    unordered_map<int,string> um1;
    unordered_map<string,int> um2;

    for(int i = 0; i < n; i++){
        string name;
        cin>>name;
        um1.insert(make_pair(i+1,name));
        um2.insert(make_pair(name,i+1));
    }

    for(int i = 0; i < m; i++){
        string s;
        cin>>s;

        if(isDigit(s)){
            int num = changeStringToInt(s);
            cout<<um1[num]<<"\n";
        }
        else{
            cout<<um2[s]<<"\n";
        }
    }
    return 0;
}
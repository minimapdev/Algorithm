#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0;
    unordered_set<string> s;
    cin>>n;

    for(int i = 0; i < n; i++){
        string str;
        cin>>str;
        if(str == "ENTER"){
            count += s.size();
            s.clear();
        }
        else{
            if(s.find(str) == s.end()){
                s.insert(str);
            } 
        }
    }

    cout<<s.size()+count;
    return 0;
}
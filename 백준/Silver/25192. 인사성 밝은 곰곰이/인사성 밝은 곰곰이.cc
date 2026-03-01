#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0;
    unordered_set<string> s;
    string str;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>str;
        if(str == "ENTER"){
            count += s.size();
            s = unordered_set<string> ();
        }
        else{
            s.insert(str);
        }
    }

    cout<<s.size()+count;
    return 0;
}
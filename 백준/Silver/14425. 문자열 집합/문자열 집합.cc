#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    int count = 0;
    cin>>n>>m;
    set<string> s;
    for(int i = 0; i < n; i++){
        string str;
        cin>>str;
        s.insert(str);
    }

    for(int i = 0; i < m; i++){
        string str;
        cin >> str;
        if(s.find(str) != s.end()){
            count++;
        }
    }

    cout<<count;
    return 0;
}
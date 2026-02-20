#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    unordered_set<int> s;

    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        s.insert(num);
    }

    for(int i = 0; i < m; i++){
        int num;
        cin>>num;

        if(s.count(num)){
            s.erase(num);
        }
        else{
            s.insert(num);
        }
    }

    cout<<s.size();

    return 0;
}
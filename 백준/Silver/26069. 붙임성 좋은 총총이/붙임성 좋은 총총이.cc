#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_set<string> us(n);
    string s1,s2;
    us.insert("ChongChong");
    for(int i = 0; i < n; i++){
        cin>>s1>>s2;
        if(us.find(s1) != us.end() || us.find(s2) != us.end()){
            us.insert(s1);
            us.insert(s2);
        }
    }

    cout<<us.size();

    return 0;
}
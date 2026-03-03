#include<iostream>
using namespace std;
static int recursiveCount;
int recursion(const string& s, int l, int r){
    recursiveCount++;
    if(l >= r) return 1;
    else if(s[l] != s[r]){
        return 0;
    }
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const string& s){
    return recursion(s,0,s.size()-1);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>s;
        cout<<isPalindrome(s)<<' '<<recursiveCount<<' ';
        recursiveCount = 0;
    }
    return 0;
}
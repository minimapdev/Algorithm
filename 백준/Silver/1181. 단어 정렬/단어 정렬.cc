#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<string> v(n);

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end(), [](const string& s1, const string& s2){
        if(s1.size() != s2.size()) return s1.size() < s2.size();
        return s1<s2;
    });

    v.erase(unique(v.begin(), v.end()),v.end());
    for(string s:v){
        cout<<s<<"\n";
    }
    return 0;
}



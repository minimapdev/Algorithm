#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<string> v1(n), v2;
    string s;

    for(int i = 0; i < n; i++){
        cin>>v1[i];
    }

    sort(v1.begin(), v1.end());

    for(int i = 0; i < m; i++){
        cin>>s;

        if(binary_search(v1.begin(), v1.end(), s)){
            v2.push_back(s);
        }
    }

    sort(v2.begin(), v2.end());
    cout<<v2.size()<<"\n";
    for(int i = 0; i < v2.size(); i++){
        cout<<v2[i]<<"\n";
    }
    return 0;
}
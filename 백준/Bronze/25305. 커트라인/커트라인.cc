#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    vector<int> v(n);    

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    
    sort(v.begin(), v.end(), greater<int>());

    cout<<v[k-1];
    return 0;
}

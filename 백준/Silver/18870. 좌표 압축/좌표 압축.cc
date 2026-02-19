#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    
    cin>>n;

    vector<long long> v1(n);
    vector<long long> v2(n);

    for(long long i = 0; i < n; i++){
        cin>>v1[i];
    }

    v2 = v1;
    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()), v1.end());

    for(long long i = 0; i < n; i++){
        int index = lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin();
        cout<<index<<' ';
    }
    return 0;
}
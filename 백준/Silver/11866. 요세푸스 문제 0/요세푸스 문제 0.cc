#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    queue<int> que;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        que.push(i);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            if(j == k){
                v.push_back(que.front());
                que.pop();
            }
            else{
                que.push(que.front());
                que.pop();
            }
        }
    }

    cout<<'<';
    for(int i = 0; i < n; i++){
        cout<<v[i];
        if(i != n-1) cout<<", ";
    }
    cout<<'>';
    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    queue<int> que;
    for(int i = 1; i <= n; i++){
        que.push(i);
    }
    while(true){
        que.pop();
        if(que.size() == 1 || que.empty()) break;
        que.push(que.front());
        que.pop();
    }

    cout<<que.back();
    return 0;
}
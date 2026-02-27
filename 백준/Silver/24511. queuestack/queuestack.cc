#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x, c, temp;
    cin>>n;
    deque<int> dq;
    vector<bool> v(n);
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        v[i] = (a == 0 ? false : true);
    }

    for(int i = 0; i < n; i++){
        cin>>x;
        if(!v[i]){
            dq.push_back(x);
        }
    }

    cin>>m;
    for(int i = 0; i < m; i++){
        cin>>c;
        dq.push_front(c);
        cout<<dq.back()<<' ';
        dq.pop_back();
    }
    return 0;
}
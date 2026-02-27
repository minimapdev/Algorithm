#include<iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x, num = 1, data;
    cin>>n;
    deque<pair<int,int>> dq;
   
    for(int i = 1; i <= n; i++){
        cin>>x;
        dq.push_back(make_pair(i,x));
    }

    while(n--){
        if(num > 0){
            for(int i = 0; i < num; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
            cout<<dq.back().first<<' ';
            num = dq.back().second;
            dq.pop_back();
        }
        else{
            for(int i = num; i < 0; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cout<<dq.front().first<<' ';
            num = dq.front().second;
            dq.pop_front();
        }
    }
    return 0;
}
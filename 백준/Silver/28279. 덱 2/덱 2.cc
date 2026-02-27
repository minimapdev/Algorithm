#include<iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, command,x;
    cin>>n;
    deque<int> dq;
    while(n--){
        cin>>command;
        switch(command){
            case 1:
                cin>>x;
                dq.push_front(x);
                break;
            case 2:
                cin>>x;
                dq.push_back(x);
                break;
            case 3:
                if(dq.empty()){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<dq.front()<<'\n';
                    dq.pop_front();
                }
                break;
            case 4:
                if(dq.empty()){
                    cout<<-1<<'\n';
                }
                else{
                    cout<<dq.back()<<'\n';
                    dq.pop_back();
                }
                break;
            case 5:
                x = dq.size();
                cout<<x<<'\n';
                break;
            case 6:
                cout<<(dq.empty() ? 1 : 0)<<'\n';
                break;
            case 7:
                cout<<(dq.empty() ? -1 : dq.front())<<'\n';
                break;
            case 8:
                cout<<(dq.empty() ? -1 : dq.back())<<'\n';
                break;
        }
    }

    return 0;
}
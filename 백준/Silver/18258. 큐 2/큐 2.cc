#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    queue<int> que;
    string command;

    while (n--) {
        cin >> command;
        if (command == "push"){
            int x;
            cin>>x;
            que.push(x);
        }
        else if(command == "pop"){
            if(que.empty()) cout<<-1<<'\n';
            else{
                cout<<que.front()<<'\n';
                que.pop();
            }
        }
        else if(command == "size"){
            cout<<que.size()<<'\n';
        }
        else if(command == "empty"){
            cout<<(que.empty() ? 1 : 0)<<'\n';
        }
        else if(command == "front"){
            cout << (que.empty() ? -1 : que.front()) << '\n';
        }
        else if(command == "back"){
            cout << (que.empty() ? -1 : que.back()) << '\n';
        }
    }
    return 0;
}
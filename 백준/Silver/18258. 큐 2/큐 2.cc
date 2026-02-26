#include <iostream>
#include <stack>
using namespace std;
#define QUE_LEN 2000001

struct Queue{
    int front;
    int rear;
    int arr[QUE_LEN];

    void Init(){
        front = 0;
        rear = 0;
    }

    bool empty(){
        if(front == rear) return true;
        else return false;
    }

    int NextPosIndex(int curPos){
        if(curPos == QUE_LEN-1){
            return 0;
        }
        else{
            return curPos+1;
        }
    }

    void Push(int data){
        rear = NextPosIndex(rear);
        arr[rear] = data;
    }

    int Pop(){
        if(empty()) return -1;
        else{
            front = NextPosIndex(front);
            return arr[front];
        }
    }
    int Size(){
        return rear - front;
    }
    int Front(){
        if(empty()) return -1;
        else return arr[front +1];
    }
    int Back(){
        if(empty()) return -1;
        else return arr[rear];
    }
};
void QueueCommand(Queue& q, const string command){
    if(command == "push"){
        int x;
        cin>>x;
        q.Push(x);
    }
    else if(command == "pop"){
        cout<<q.Pop()<<'\n';
    }
    else if(command == "size"){
        cout<<q.Size()<<'\n';
    }
    else if(command == "empty"){
        cout<<(q.empty() ? 1 : 0)<<'\n';
    }
    else if(command == "front"){
        cout<<q.Front()<<'\n';
    }
    else if(command == "back"){
        cout<<q.Back()<<'\n';
    }
}

Queue q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string command;
    q.Init();
    for(int i = 0; i < n; i++){
        cin>>command;
        QueueCommand(q,command);
    }
    return 0;
}
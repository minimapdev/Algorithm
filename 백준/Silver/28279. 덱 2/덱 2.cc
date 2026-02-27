#include<iostream>
using namespace std;

class Deque{
private:
    struct Node{
        int data;
        Node * prev;
        Node * next;
        Node(int data):data(data), prev(NULL), next(NULL){}
    };

    Node * head;
    Node * tail;
    int size;

public:
    Deque():head(NULL), tail(NULL), size(0){}

    void PushFront(int data){
        Node * newNode = new Node(data);
        newNode->next = head;

        if(IsEmpty()){
            tail = newNode;
        }
        else{
            head->prev = newNode;
        }

        newNode->prev = NULL;
        head = newNode;
        size++;
    }

    void PushBack(int data){
        Node * newNode = new Node(data);
        newNode->prev = tail;

        if(IsEmpty()){
            head = newNode;
        }
        else{
            tail->next = newNode;
        }

        newNode->next = NULL;
        tail = newNode;
        size++;
    }

    int PopFront(){
        if(IsEmpty()){
            return -1;
        }

        Node * delNode = head;
        int rData = delNode->data;

        head = head->next;
        delete(delNode);

        if(head == NULL){
            tail = NULL;
        }
        else{
            head->prev = NULL;
        }
        size--;
        return rData;
    }

    int PopBack(){
        if(IsEmpty()){
            return -1;
        }

        Node * delNode = tail;
        int rData = tail->data;

        tail = tail->prev;
        delete(delNode);

        if(tail == NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
        size--;
        return rData;
    }

    int Size(){
        return size;
    }

    bool IsEmpty(){
        return head == NULL ? true : false;
    }

    int PeekFront(){
        if(IsEmpty()){
            return -1;
        }

        return head->data;
    }

    int PeekBack(){
        if(IsEmpty()){
            return -1;
        }

        return tail->data;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, command,x;
    cin>>n;
    Deque dq;

    while(n--){
        cin>>command;
        switch(command){
            case 1:
                cin>>x;
                dq.PushFront(x);
                break;
            case 2:
                cin>>x;
                dq.PushBack(x);
                break;
            case 3:
                x = dq.PopFront();
                cout<<x<<'\n';
                break;
            case 4:
                x = dq.PopBack();
                cout<<x<<'\n';
                break;
            case 5:
                x = dq.Size();
                cout<<x<<'\n';
                break;
            case 6:
                cout<<(dq.IsEmpty() ? 1 : 0)<<'\n';
                break;
            case 7:
                x = dq.PeekFront();
                cout<<x<<'\n';
                break;
            case 8:
                x = dq.PeekBack();
                cout<<x<<'\n';
                break;
        }
    }

    return 0;
}
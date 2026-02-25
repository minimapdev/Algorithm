#include <iostream>
#define STACK_LEN 1000000
using namespace std;

struct Stack{
    int stackArray[STACK_LEN];
    int topIndex;

    void Init(){
        topIndex = -1;
}

int IsEmpty(){
    if(topIndex == -1) return 1;
    else return 0;
}

void Push(int x){
    topIndex+=1;
    stackArray[topIndex] = x;
}

int Pop(){
    int rIndex = topIndex;
    if(IsEmpty()){
        return -1;
    }
    topIndex -=1;
    return stackArray[rIndex];
}

int Seek(){
    if(IsEmpty()){
        return -1;
    }

    return stackArray[topIndex];
}

int Count(){
    return topIndex+1;
}

};



void StackCommand(Stack * pstack, int x){
    int num;
    switch(x){
        case 1:
            cin>>num;
            pstack->Push(num);
            break;
        case 2:
            num = pstack->Pop();
            cout<<num<<"\n";
            break;
        case 3:
            num = pstack->Count();
            cout<< num<<"\n";
            break;
        case 4:
            num = pstack->IsEmpty();
            cout<<num<<"\n";
            break;
        case 5:
            num = pstack->Seek();
            cout<<num<<"\n";
            break;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, command;
    cin>>n;

    Stack stack;
    stack.Init();

    for(int i = 0; i < n; i++){
        cin>>command;
        StackCommand(&stack, command);
    }

    return 0;
}
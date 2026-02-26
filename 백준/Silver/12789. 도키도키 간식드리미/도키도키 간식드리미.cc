#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x, curNum = 1;
    cin>>n;
    stack<int> st;

    for(int i = 0; i < n; i++){
        cin>>x;
        if(x == curNum){
            curNum++;
        }
        else{
            st.push(x);
        }

        while(!st.empty() && st.top() == curNum){
            curNum++;
            st.pop();
        }
    }

    if(st.empty()){
        cout<<"Nice";
    }
    else{
        cout<<"Sad";
    }

    return 0;
}
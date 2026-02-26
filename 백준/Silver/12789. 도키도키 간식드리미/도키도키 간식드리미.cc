#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    short n, curNum = 1;
    cin>>n;
    vector<short> v(n); 
    stack<short> st;

    for(int i = 0; i < n; i++){
        cin>>v[i];
        while(!st.empty() && st.top() == curNum){
            st.pop();
            curNum++;
        }

        if(v[i] == curNum){
            curNum++;
        }
        else{
            st.push(v[i]);
        }
    }

    while(!st.empty()){
        if(st.top() == curNum){
            curNum++;
            st.pop();
        }
        else{
            cout<<"Sad";
            return 0;
        }
    }

    cout<<"Nice";
    return 0;
}
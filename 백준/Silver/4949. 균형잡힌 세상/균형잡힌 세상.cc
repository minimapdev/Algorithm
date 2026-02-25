#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true){
        string s;
        stack<char> st;
        bool valid = true;
        getline(cin,s);
        if(s ==".") break;

        for(size_t i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '['){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.empty()||st.top() == '[' ){
                    valid = false;
                    break;
                }
                st.pop();
            }
            else if(s[i] == ']'){
                if(st.empty()||st.top() == '('){
                    valid = false;
                    break;
                }
                st.pop();
            }
        }

        if(st.size() != 0) valid = false;
        cout<<(valid ? "yes\n":"no\n");
    }
    return 0;
}
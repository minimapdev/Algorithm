#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    while(n--){
        stack<char> st;
        string s;
        cin>>s;

        bool valid = true;

        for(size_t i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    valid = false;
                    break;
                }
                st.pop();
            }
        }

        if (!st.empty()) valid = false;
        cout << (valid ? "YES\n" : "NO\n");
    }
    return 0;
}
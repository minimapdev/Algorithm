#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;
        int balance = 0;
        bool valid = true;

        for(char c : s){
            if(c == '(') balance ++;
            else balance--;

            if(balance < 0){
                valid = false;
                break;
            }
        }

        if(balance != 0) valid = false;
        cout << (valid ? "YES\n" : "NO\n");
    }
    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> st;
    int n, sum = 0;
    cin>>n;

    while(n--){
        int x;
        cin>>x;

        if(x == 0){
            sum -= st.top();
            st.pop();
        }
        else{
            sum += x;
            st.push(x);
        }
    }

    cout<<sum;
    
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    char s[5][16] = {};

    for(int row = 0; row < 5; row++){
        cin>>s[row];
    }

    for(int col = 0; col < 16; col++){
        for(int row = 0; row < 5; row++){
            if(s[row][col] != '\0'){
                cout<<s[row][col];
            }
        }
    }

    return 0;
}

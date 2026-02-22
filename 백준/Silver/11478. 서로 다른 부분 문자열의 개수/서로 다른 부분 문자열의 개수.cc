#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;
    std::cin>>str;
    std::unordered_set<std::string> s;

    int n = 1;
    for(int start = 0; start < str.size(); start++){
        std::string partStr = "";
        for(int end = start; end < str.size(); end++){
            partStr += str[end];
            s.insert(partStr);
        }
    }

    std::cout<<s.size();
    return 0;
} 
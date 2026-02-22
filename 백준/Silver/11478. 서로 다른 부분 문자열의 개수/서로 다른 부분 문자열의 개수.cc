#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;
    std::cin>>str;

    std::vector<std::string> suffix;
    for(int i = 0; i <= str.size(); i++){
        suffix.push_back(str.substr(i, str.size()-i));
    }

    sort(suffix.begin(), suffix.end());

    int count = 0;
    for(int i = 1; i < suffix.size(); i++){
        int idx = 0;

        while(suffix[i - 1].size() > idx && suffix[i].size() > idx && suffix[i-1][idx] == suffix[i][idx]){
            idx++;
        }

        count += suffix[i].size() - idx;
    }

    std::cout<<count;
    return 0;
} 
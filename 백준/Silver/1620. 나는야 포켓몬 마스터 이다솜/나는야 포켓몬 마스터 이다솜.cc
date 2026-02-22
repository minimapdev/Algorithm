#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n,m;
    std::cin>>n>>m;

    std::unordered_map<std::string, int> name_to_num;
    std::vector<std::string> num_to_name(n+1);

    for(int i = 1; i <= n; i++){
        std::cin>>num_to_name[i];
        name_to_num[num_to_name[i]] = i;
    }

    std::string s;
    for(int i = 0; i < m; i++){
        std::cin>>s;

        if(isdigit(s[0])){
            std::cout<<num_to_name[stoi(s)]<<"\n";
        }
        else{
            std::cout<<name_to_num[s]<<"\n";
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int average=0, middle=0;
    vector<int> v(5);

    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
        average += v[i];
    }

    sort(v.begin(), v.end());
    average  /= v.size();
    middle = v[2];

    cout<<average<<"\n"<<middle;
    return 0;
}

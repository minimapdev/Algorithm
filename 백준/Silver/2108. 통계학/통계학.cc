#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getAverage(int sum, int count){
    if(sum > 0) return (sum + count * 0.5) / count;
    return (sum - count * 0.5) / count;
}

int getMiddleIndex(int count){
    return count/2;
}

int getMode(const vector<int> & v){
    int count[8001] = {0};
    int maxValue = 0;

    for(int x : v){
        count[x + 4000]++;
        maxValue = max(maxValue,count[x+4000]);
    }

    int found = 0;
    for(int i = 0; i < 8001; i++){
        if(count[i] == maxValue){
            found++;
            if(found == 2){
                return i - 4000;
            }
        }
    }

    for(int i = 0; i < 8001; i++){
        if(count[i] == maxValue){
            return i-4000;
        }
    }
    return 0;
}

int getRange(int start,int end){
    return end - start;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    int sum = 0;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>x;
        sum+=x;
        v[i] = x;
    }
    sort(v.begin(),v.end());

    cout<<getAverage(sum,v.size())<<'\n'<<v[getMiddleIndex(v.size())]<<'\n'<<getMode(v)<<'\n'<<getRange(v[0],v[n-1]);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    double max;
    double result = 0;
    cin>>N;
    vector<double> v(N);

    for(int i = 0; i < N; i++){
        cin>>v[i];
    }

    max = v[0];

    for(int i = 0; i < N; i++){
        if(v[i] >= max){
            max = v[i];
        }
    }

    for(int i = 0; i < N; i++){
        v[i] = v[i] / max * 100;
        result += v[i];
    }

    cout<<result/N<<"\n";
    return 0;
}
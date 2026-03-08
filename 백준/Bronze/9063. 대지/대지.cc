#include <iostream>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int x,y;
    int minX,minY;
    int maxX,maxY;
    cin>>n>>x>>y;
    minX = x;
    maxX = x;
    minY = y;
    maxY = y;

    for(int i = 1; i < n; i++){
        cin>>x>>y;
        if(x >= maxX) maxX= x;
        if(x<= minX) minX = x;
        if(y>= maxY) maxY= y;
        if(y<= minY) minY = y;
    }

    cout<<(maxX - minX) * (maxY-minY);
    return 0;
}
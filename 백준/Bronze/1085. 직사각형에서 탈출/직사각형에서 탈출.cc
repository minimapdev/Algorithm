#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,w,h;
    cin>>x>>y>>w>>h;

    int diffX = w-x;
    int diffY = h-y;

    if(diffX <= diffY){
        cout<< ((x<=y) ? (x <= diffX ? x : diffX) : (y <= diffX ? y : diffX));
    }   
    else{
        cout<< ((x<=y) ? (x <= diffY ? x : diffY) : (y <= diffY ? y : diffY));
    }
    
    return 0;
}
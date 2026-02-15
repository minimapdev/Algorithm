#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point{
    long long x;
    long long y;
};

bool cmp(const Point& p1, const Point& p2){
    if(p1.x != p2.x){
        return p1.x<p2.x;
    }
    return p1.y<p2.y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;
    vector<Point> v(n);

    for(int i = 0; i < n;i++){
        cin>>v[i].x>>v[i].y;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < n; i++){
        cout<<v[i].x<<' '<<v[i].y<<"\n";
    }
    return 0;
}



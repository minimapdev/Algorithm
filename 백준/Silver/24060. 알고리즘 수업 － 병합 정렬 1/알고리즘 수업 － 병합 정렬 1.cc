#include<iostream>
#include<vector>
using namespace std;

int savedCount = 0;
int savedNum = -1;
int k;
vector<int> temp;

void Merge(vector<int>& v, int left, int mid, int right){
    int fIndex = left;
    int rIndex = mid + 1;
    int sIndex = left;

    while(fIndex <= mid && rIndex <= right){
        if(v[fIndex] <= v[rIndex]){
            temp[sIndex] = v[fIndex++];
        }
        else{
            temp[sIndex] = v[rIndex++];
        }
        sIndex++;
    }

    if(fIndex > mid){
        for(int i = rIndex; i <= right; i++,sIndex++){
            temp[sIndex] = v[i];
        }
    }
    else{
        for(int i = fIndex; i <= mid; i++,sIndex++){
            temp[sIndex] = v[i];
        }
    }

    for(int i = left; i <= right; i++){
        v[i] = temp[i];
        savedCount++;
        if(savedCount == k) {
            savedNum = v[i];
            return;
        }
    }
}

void Merge_sort(vector<int>& v, int left, int right){
    if (savedCount >= k) return;
    int mid;

    if(left < right){
        mid = (left + right) / 2;

        Merge_sort(v, left, mid);
        Merge_sort(v, mid+1, right);
        Merge(v, left, mid ,right);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n>>k;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    temp.assign(n,0);
    Merge_sort(v,0,n-1);
    cout<<savedNum;
    return 0;
}
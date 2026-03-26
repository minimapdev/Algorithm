#include <iostream>
#include <set>
using namespace std;

int main(){

    int arr[10];
    set<int> s;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i ++){
        int value = arr[i] % 42;
        s.insert(value);
    }

    printf("%d", s.size());

    return 0;
}
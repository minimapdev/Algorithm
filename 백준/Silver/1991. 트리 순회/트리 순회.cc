#include <iostream>
#include <vector>
using namespace std;

char leftNode[26];
char rightNode[26];
void preorder(char cur)
{
    if (cur == '.')
        return;
    cout << cur;
    preorder(leftNode[cur - 'A']);
    preorder(rightNode[cur - 'A']);
}
void inorder(char cur)
{
    if (cur == '.')
        return;
    inorder(leftNode[cur - 'A']);
    cout << cur;
    inorder(rightNode[cur - 'A']);
}
void postorder(char cur)
{
    if (cur == '.')
        return;
    postorder(leftNode[cur - 'A']);
    postorder(rightNode[cur - 'A']);
    cout << cur;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char parent, left, right;
        cin >> parent >> left >> right;
        leftNode[parent - 'A'] = left;
        rightNode[parent - 'A'] = right;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    return 0;
}
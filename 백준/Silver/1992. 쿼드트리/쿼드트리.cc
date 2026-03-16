#include <iostream>
using namespace std;

int quadTree[65][65] = {};

void QuadTree(int row, int col, int size)
{
    int pixel = quadTree[row][col];
    bool complete = true;
    for (int i = row; i < row + size; i++)
    {
        for (int j = col; j < col + size; j++)
        {
            if (pixel != quadTree[i][j])
            {
                complete = false;
                break;
            }
        }
        if (!complete)
            break;
    }

    if (complete)
    {
        cout << pixel;
        return;
    }

    cout << '(';
    int half = size / 2;
    QuadTree(row, col, half);
    QuadTree(row, col + half, half);
    QuadTree(row + half, col, half);
    QuadTree(row + half, col + half, half);
    cout << ')';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            quadTree[i][j] = s[j] - '0';
        }
    }
    QuadTree(0, 0, n);
    return 0;
}
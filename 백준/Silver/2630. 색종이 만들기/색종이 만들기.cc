#include <iostream>
using namespace std;

int arr[129][129] = {};
int blue = 0, white = 0;

void Paper(int row, int col, int size)
{
    int color = arr[row][col];
    bool complete = true;

    for (int i = row; i < row + size; i++)
    {
        for (int j = col; j < col + size; j++)
        {
            if (arr[i][j] != color)
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
        if (color == 0)
            white++;
        else
            blue++;
        return;
    }

    int half = size / 2;
    Paper(row, col, half);
    Paper(row, col + half, half);
    Paper(row + half, col, half);
    Paper(row + half, col + half, half);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    Paper(0, 0, n);

    cout << white << '\n' << blue;
    return 0;
}
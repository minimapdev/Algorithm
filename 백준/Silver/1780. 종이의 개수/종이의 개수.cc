#include <iostream>
using namespace std;
int arr[2188][2188] = {};
int count1, count2, count3 = 0;
void Paper(int row, int col, int size)
{
    bool complete = true;
    int color = arr[row][col];

    for (int i = row; i < row + size; i++)
    {
        for (int j = col; j < col + size; j++)
        {
            if (color != arr[i][j])
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
        if (color == -1)
        {
            count1++;
        }
        else if (color == 0)
        {
            count2++;
        }
        else
        {
            count3++;
        }
        return;
    }

    int third = size / 3;
    Paper(row, col, third);
    Paper(row, col + third, third);
    Paper(row, col + third * 2, third);
    Paper(row + third, col, third);
    Paper(row + third, col + third, third);
    Paper(row + third, col + third * 2, third);
    Paper(row + third * 2, col, third);
    Paper(row + third * 2, col + third, third);
    Paper(row + third * 2, col + third * 2, third);
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

    cout << count1 << '\n' << count2 << '\n' << count3;
    return 0;
}
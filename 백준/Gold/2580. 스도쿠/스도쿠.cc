#include <iostream>
#include <vector>
using namespace std;

int arr[10][10] = {};
vector<pair<int, int>> blank;

bool check(int row, int col, int num)
{
    for (int i = 0; i < 9; i++)
    {
        if (arr[row][i] == num)
        {
            return false;
        }
        else if (arr[i][col] == num)
        {
            return false;
        }
    }

    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (int i = startRow; i < startRow + 3; i++)
    {
        for (int j = startCol; j < startCol + 3; j++)
        {
            if (arr[i][j] == num)
                return false;
        }
    }

    return true;
}

bool dfs(int idx)
{
    if (idx == blank.size())
        return true;

    int row = blank[idx].first;
    int col = blank[idx].second;

    for (int num = 1; num <= 9; num++)
    {
        if (check(row, col, num))
        {
            arr[row][col] = num;

            if (dfs(idx + 1))
                return true;

            arr[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                blank.push_back({i, j});
            }
        }
    }

    dfs(0);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
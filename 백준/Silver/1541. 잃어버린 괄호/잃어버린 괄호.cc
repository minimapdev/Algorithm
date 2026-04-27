#include <iostream>
#include <string>
using namespace std;

int getNum(const string &s)
{
    int num = 0;

    for (char c : s)
    {
        num = num * 10 + (c - '0');
    }

    return num;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int sum = 0;
    string temp = "";
    bool isMinus = false;

    for (char c : s)
    {
        if (c == '+' || c == '-')
        {
            int num = getNum(temp);

            if (isMinus)
                sum -= num;
            else
                sum += num;

            temp = "";

            if (c == '-')
            {
                isMinus = true;
            }
        }
        else
        {
            temp += c;
        }
    }

    int num = getNum(temp);

    if (isMinus)
        sum -= num;
    else
        sum += num;

    cout << sum;

    return 0;
}
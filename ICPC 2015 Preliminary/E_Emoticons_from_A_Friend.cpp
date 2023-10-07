#include <bits/stdc++.h>
using namespace std;

int f()
{
    string str;
    cin >> str;

    int acm[3] = {0, 0, 0};
    int notUsed = 0;

    for (int i = 0; i < str.size(); i++) // ^ _ _ ^ _ _ ^
    {
        if (str[i] == '^')
        {
            if (acm[1])
            {
                acm[1]--;
                acm[2]++;
            }
            else if (notUsed)
            {
                acm[1]++;
                notUsed--;
            }
            else
                acm[0]++;
        }
        else if (acm[0])
        {
            acm[1]++;
            acm[0]--;
        }
        else
            notUsed = min(notUsed + 1, acm[2]);
    }

    return acm[2];
}

int main()
{
    int t;
    cin >> t;

    for (int test = 1; test <= t; test++)
    {
        printf("Case %d: %d\n", test, f());
    }

    return 0;
}

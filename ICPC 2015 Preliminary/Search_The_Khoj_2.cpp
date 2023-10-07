#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n, count = 0;
        cin >> n;
        vector<string> phoneBook;
        string momNum;

        for (int i = 1; i <= n; i++)
        {
            string pH;
            cin >> pH;
            phoneBook.push_back(pH);
        }
        cin >> momNum;

        int Z = momNum.size();

        for (int j = 1; j <= n; j++)
        {
            for (int i = Z; i >= 0; i--)
            {
                if (momNum == phoneBook[i])
                {
                    cout << phoneBook[i] << endl;
                }
                else
                {
                    string s = phoneBook[i];
                    if (momNum[i] != s[i])
                    {
                        count++;
                    }
                }
                if (count > 1)
                    break;
            }
        }
    }
}
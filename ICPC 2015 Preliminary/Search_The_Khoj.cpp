#include <bits/stdc++.h>
using namespace std;

int k;
vector<string> phoneBook;
string partNum, partMomNum;

int check(string pB, string mN)
{
    int cnt = 0;
    int n = pB.size();
    int N = mN.size();

    if (n != N)
        return 0;

    for (int i = N; i >= 0; i--)
    {
        if (mN[i] < pB[i])
            continue;
        if (mN[i] != pB[i])
            cnt++;
    }
    if (cnt < 2)
        return 1;

    return 0;
}

int main()
{
    int t;
    cin >> t;
    for (k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        string sup_phoneBook;
        string momNum;

        for (int i = 0; i < n; i++)
        {
            cin >> sup_phoneBook;
            
            int Y = stoi(sup_phoneBook);
            float Z = stof(sup_phoneBook);

            if(Y < Z)
                continue;
            
            phoneBook.push_back(sup_phoneBook);
        }
        cin >> momNum;

        cout << "Case " << k << ":" << endl;

        for (int i = 0; i < n; i++)
        {
            if (momNum == phoneBook[i])
            {
                cout << phoneBook[i] << endl;
            }
            else
            {
                int l = phoneBook[i].size();
                partNum = phoneBook[i].substr(l / 2, (l / 2) + 1);
                partMomNum = momNum.substr(l / 2, (l / 2) + 1);
                int q = check(partNum, partMomNum);
                if (q == 1)
                    cout << phoneBook[i] << endl;
            }
        }
        phoneBook.clear();
    }
}
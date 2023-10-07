#include<bits/stdc++.h>
using namespace std;

string partNum, numBook;
int k;

void check(string pB, string mN)
{
    int cnt = 0;
    int n = pB.size();
    int N = mN.size();
    for(int i = N; i>=n; i--)
    {
        if(mN[i] > pB[i])
            continue;
        if(mN[i] != pB[i])
            cnt++;
    }
    if(cnt < 2)
        cout<< "Case " << k << ":" << endl << numBook << endl;
}

int main()
{
    int t;
    cin>>t;
    for(k = 1; k<=t; k++)
    {
        string momNum;
        int n;
        cin>>n;

        for(int i = 0; i<=n; i++)
        {
            if(n>0)
            {
                cin>>numBook;
                if(numBook == momNum)
                {
                    cout<< "Case " << k << ":" << endl << numBook << endl;
                    continue;
                }
                int l = numBook.size();
                partNum = numBook.substr(l/2, (l/2) + 1);
                check(partNum, momNum);
            }
            else
            cin>>momNum;
        }
    }
    return 0;
}
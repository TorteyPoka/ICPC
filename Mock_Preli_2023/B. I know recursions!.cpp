/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<pair<int, int>> v;

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, p, k;
        cin >> n >> p >> k;

        
        for (int i = n; i > 0; i--)
        {
            if (i >= p)
                for (int j = i - 1; j > 0; j--)
                {
                    /* failed to determine. */
                }
            else break;
        }

        if (v.size() > k)
        {
            cout << "Case " << i << ": Invalid" << endl;
        }
        else
        {
            cout << "Case " << i << ": " << v[k].first << " " << v[k].second << endl;
        }
    }
    return 0;
}
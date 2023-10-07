#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;

    for (ll i = 1; i <= t; i++)
    {
        string emotes;
        ll carret = 0, underScore = 0, count = 0;
        cin >> emotes;

        ll size = emotes.size();

        for (ll j = 0; j < size; j++)
        {
            if (emotes[j] == '^')
            {
                if (underScore != 0)
                {
                    count++;
                    carret--;
                    underScore--;
                    if (carret == 0)
                    {
                        underScore = 0;
                    }
                    continue;
                }
                carret++;
            }
            else if (emotes[j] == '_' && carret != 0)
            {
                underScore++;
            }
        }
        cout << "Case "<< i << ": " << count << endl;
    }

    return 0;
}
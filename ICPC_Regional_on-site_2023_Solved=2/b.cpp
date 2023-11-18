/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        double totalChar = 94;

        char c1, c2;
        cin >> c1 >> c2;

        int a = (int) c1;
        int b = (int) c2;

        int k = abs(a - b);

        for(int i = 1; i<=k; i++ )
        {
            if(k % i == 0)
            {
                cout << i << " " <<  ceil(totalChar / (float)i) << "\n";
            }
        }
        cout << "\n";

        
    }
    return 0;
}
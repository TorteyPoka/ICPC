#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int k = 1; k<=tc; k++)
    {
        int n;
        cin >> n;
        vector<string>dadsPhone;
        string momNum;
        int sum_mom_num = 0, sum_dads_phone = 0;

        for(int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            dadsPhone.push_back(s);
        }
        cin>>momNum;

        int z = momNum.size();

        for(int i=0; i<z;  i++)
        {
            string dads_phone_singular;
            dads_phone_singular = dadsPhone[i];

            sum_mom_num+=(momNum[i] - '0');
            sum_dads_phone+=(dads_phone_singular[i] - '0');
        }

    }
}
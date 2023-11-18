#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T;
    cin >> T;
    for(int t=1; t<=T; t++) {
        int n,a,b;
        cin >> n >> a >> b;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int start = 0, end = n-1, res = 0, k = 0;

        while(start < end)
        {
            int sum = v[start] + v[end];
            
            if(v[start] > b)
            {
                k++;
                start++;
                continue;
            }
            if(sum > b)
            {
                k++;
                start++;
                continue;
            }
            else
            {
                res = b - k;
                break; 
            }

        }
        cout << "Case " << t << ": " << res << endl;
    }
    return 0;
}
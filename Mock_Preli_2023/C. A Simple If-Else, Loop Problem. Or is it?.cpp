#include<bits/stdc++.h>
using namespace std;

int pairs_count(vector<int>& arr, int A, int B) {
    int n = arr.size();
    int ans = 0;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) 
    {
        int lb = lower_bound(arr.begin() + i + 1, arr.end(), A - arr[i]) - arr.begin();
        int ub = upper_bound(arr.begin() + i + 1, arr.end(), B - arr[i]) - arr.begin();

        ans += ub - lb;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T;
    cin >> T;
    for(int t=1; t<=T; t++) {
        int N, A, B;
        cin >> N >> A >> B;
        vector<int> P(N);
        for(int i=0; i<N; i++) cin >> P[i];

        int res = pairs_count(P, A, B);
        cout << "Case " << t << ": " << res << endl;
    }
    return 0;
}
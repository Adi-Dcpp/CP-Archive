#include <bits/stdc++.h>
using namespace std;

using ll = long long;

static inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int T = 1;
    if (!(cin >> T)) return 0;
    while (T--) {
        ll n , x;
        cin >> n >> x;
        vector<int>arr(n + 1);
        arr[0] = 0 ;
        int minTank = INT_MIN;
        for(int i = 1 ; i <= n ; i++) {
            cin >> arr[i];
            minTank = max(minTank, arr[i] - arr[i - 1]);
        }
        cout << (minTank > 2 * (x - arr[n])? minTank : 2 * (x - arr[n])) << endl;
    }
    return 0;
}

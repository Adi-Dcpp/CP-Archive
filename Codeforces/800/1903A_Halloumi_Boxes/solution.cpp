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
        ll n , k ;
        cin >> n >> k ;
        vector<ll>nums(n) ;
        for(int i = 0 ; i < n ; i++)
            cin >> nums[i];
        bool isSorted = true;
        for(int i = 0 ; i < n - 1 ; i++){
            if(nums[i + 1] < nums[i]) {
                isSorted = false;
                break;
            }
        }
        cout <<  (isSorted || k > 1 ? "YES" : "NO") << endl ;
    }
    return 0;
}

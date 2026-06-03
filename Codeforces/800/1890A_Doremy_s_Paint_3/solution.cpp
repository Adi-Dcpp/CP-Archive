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
        ll n ;
        cin >> n;
        ll a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        map<ll,int>mp;
        for(auto x : a) {
            mp[x]++;
        }
        if(mp.size() >= 3) {
            cout << "No" << endl;
        }else {
            int f1 = mp.begin()->second;
            int f2 = mp.rbegin()->second;
            if(f1 == f2) {
                cout << "Yes" << endl;
            }else if(n % 2 == 1 && abs(f1 - f2) == 1) {
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}

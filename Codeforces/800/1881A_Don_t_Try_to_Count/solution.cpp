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
        int n , m ;
        cin >> n >> m ;
        vector<string>x(6);
        string s;
        cin >> x[0] >> s ;
        for(int i = 0 ; i < 5 ; i++){
            x[i + 1] = x[i] + x[i];
        }
        int ans = -1 ;
        for(int i = 0 ; i < 6 ; i++) {
            if(x[i].find(s) != string::npos) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

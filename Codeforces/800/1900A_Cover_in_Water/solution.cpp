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
        int n ;
        cin >> n;
        string s;
        cin >> s;
        bool contThree = false;
        int emptyCnt = 0;
        for (int i = 0 ; i < n ; i++) {
            if(s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.'){
                contThree = true;
                break;
            }
            if(s[i] == '.')
                emptyCnt++;
        }
        cout << (contThree ? 2 : emptyCnt) << endl;
    }
    return 0;
}

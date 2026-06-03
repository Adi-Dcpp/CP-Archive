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
        int n;
        cin >> n;
        cout << (n % 3 != 0 ? "First" : "Second") << endl;
    }
    return 0;
}

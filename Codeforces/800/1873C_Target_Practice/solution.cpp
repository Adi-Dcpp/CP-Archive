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
        vector<string>s;
        for(int i = 0 ; i < 10 ; i++){
            string t = "";
            for(int j = 0 ; j < 10 ; j++){
                char c ;
                cin >> c;
                t += c;
            }
            s.push_back(t);
        }
        int ans = 0;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                if(s[i][j] == 'X'){
                    ans += min({i,j,9-i,9-j}) + 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

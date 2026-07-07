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
        ll n;
        std::cin >> n;

        std::vector<int>b(n),a;

        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
        }

        a.push_back(b[0]);

        for(int i = 1 ; i < n ; i++){
            if(b[i] >= b[i - 1]){
                a.push_back(b[i]);
            }else{
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }

        cout << a.size() << endl;
        
        for (auto k : a){
            cout << k << " ";
        }
        cout << endl ;
    }
    return 0;
}

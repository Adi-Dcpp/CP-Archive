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

        vector<int>a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }

        int maxi = *max_element(a.begin(),a.end());

        vector<int>b,c;
        
        for(auto v : a){
            if(v != maxi){
                b.push_back(v);
            }else{
                c.push_back(v);
            }
        }

        if(b.size() == 0){
            cout << -1 << endl;
        }else{
            cout << b.size() << " " << c.size() << endl;
            for(auto v : b){
                cout << v << " ";
            }
            cout << endl;
            for(auto v : c){
                cout << v << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

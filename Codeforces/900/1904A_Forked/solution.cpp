#include <bits/stdc++.h>
using namespace std;

using ll = long long;

static inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
    int dx[4] = {-1 , 1 , -1 , 1}, dy[4] = {-1 , -1 , 1 , 1};
int main() {
    fast_io();

    int T = 1;
    if (!(cin >> T)) return 0;
    while (T--) {
        ll a , b;
        cin >> a >> b;
        ll x_k, y_k, x_q, y_q;
        cin >> x_k >> y_k >> x_q >> y_q;
        set<pair<int,int>>k, q;

        for(int i = 0 ; i < 4 ; i++){
            k.insert({x_k + dx[i] * a , y_k + dy[i] * b});
            k.insert({x_k + dx[i] * b , y_k + dy[i] * a});
            q.insert({x_q + dx[i] * a , y_q + dy[i] * b});
            q.insert({x_q + dx[i] * b , y_q + dy[i] * a});
        }
        int ans = 0 ;
        for(auto pos : k){
            if(q.find(pos) != q.end()){
                ans++;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}

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
        int arr[n - 1];
        for(int i = 0 ; i < n - 1 ; i++){
           cin >> arr[i]; 
        }
        int sum = 0 ;
        for(int i = 0 ; i < n - 1 ; i++){
            sum += arr[i];
        }
        cout << -1 * sum << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

static inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int n ;
    cin >> n;
    
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    int minDiff = INT_MAX;

    for(int i = 0 ; i < n ; i++){
        minDiff = min(minDiff , abs(arr[i]));
    }

    cout << minDiff;

    return 0;
}

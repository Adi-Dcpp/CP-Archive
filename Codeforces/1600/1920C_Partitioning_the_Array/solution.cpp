#include <bits/stdc++.h>
using namespace std;

using ll = long long;

static inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<int> divisor(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i)
            continue;
        d.push_back(i);
        if (n / i != i)
            d.push_back(n / i);
    }
    return d;
}

int main()
{
    fast_io();

    int T = 1;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        auto div = divisor(n);
        int ans = 0;
        for (auto &k : div)
        {
            int m = 0;
            for (int i = k; i < n; i++)
            {
                m = gcd(m, abs(v[i] - v[i - k]));
            }
            if (m != 1)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}

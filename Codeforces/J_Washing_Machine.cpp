#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll n, k, h;
    cin >> n >> k >> h;

    vector<ll> a(n);
    bool impossible = false;

    ll max_allowed = h * k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max_allowed)
        {
            impossible = true;
        }
    }

    if (impossible)
    {
        cout << -1 << "\n";
        return;
    }

    ll total_hours_needed = 0;
    for (int i = 0; i < n; i++)
    {
        total_hours_needed += (a[i] + k - 1) / k;
    }

    ll p = (total_hours_needed + h - 1) / h;

    cout << p << "\n";
}

int main()
{
    go;
    int mk = 1;
    // cin >> mk;
    while (mk--)
    {
        solve();
    }
    return 0;
}
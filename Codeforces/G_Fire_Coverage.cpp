#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

bool check(ll d, ll n, ll m, ll k)
{
    ll side = 2 * d + 1;

    ll rows = (n + side - 1) / side;
    ll cols = (m + side - 1) / side;

    if (rows > 0 && cols > k / rows)
    {
        return false;
    }

    return (rows * cols) <= k;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    ll low = 0;
    ll high = max(n, m);
    ll ans = high;

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        if (check(mid, n, m, k))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main()
{
    go;
    int mk = 1;
    while (mk--)
    {
        solve();
    }
    return 0;
}
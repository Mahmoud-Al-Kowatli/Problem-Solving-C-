#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    ll takes = min({m, n, k});
    ans += takes;

    n -= takes;
    m -= takes;
    k -= takes;
    if (n > 0 && k > 0)
    {
        ll tr = min(n / 2, k);
        ans += tr;
    }
    cout << ans << endl;
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
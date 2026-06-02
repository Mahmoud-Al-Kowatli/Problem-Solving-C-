#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll n, a, b, s = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        ll li = i, ss = 0;
        while (li != 0)
        {
            ll last = li % 10;
            ss += last;
            li /= 10;
        }

        if (ss >= a && ss <= b)
        {
            s += i;
        }
    }
    cout << s << "\n";
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
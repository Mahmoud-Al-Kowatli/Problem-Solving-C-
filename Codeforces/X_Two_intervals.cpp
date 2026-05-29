#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    ll first = max(l1, l2);
    ll sec = min(r1, r2);

    if (first <= sec)
    {
        cout << first << " " << sec << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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
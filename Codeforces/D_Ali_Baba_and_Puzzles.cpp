#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a + b - c == d) ||
        (a + b * c == d) ||
        (a - b + c == d) ||
        (a - b * c == d) ||
        (a * b + c == d) ||
        (a * b - c == d))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll n, k, a;
    cin >> n >> k >> a;

    ll numerator = n * k;

    if (numerator % a != 0)
    {
        cout << "double\n";
    }
    else
    {
        ll res = numerator / a;

        if (res <= 2147483647)
        {
            cout << "int\n";
        }
        else
        {
            cout << "long long\n";
        }
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
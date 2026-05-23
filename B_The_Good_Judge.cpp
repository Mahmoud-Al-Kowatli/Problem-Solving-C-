#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    ll ga = 0, gb = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
        {
            ga = x;
        }
        ga = gcd(ga, x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
        {
            gb = x;
        }
        gb = gcd(gb, x);
    }
    if (gb == ga)
    {
        cout << 0 << endl;
    }
    else if (gb % ga == 0 || ga % gb == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
}

int main()
{
    go;
    int mk = 1;
    cin >> mk;
    while (mk--)
    {
        solve();
    }
    return 0;
}
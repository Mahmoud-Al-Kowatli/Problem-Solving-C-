#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> ctn(32);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            if ((a[i] & (1 << j)) != 0)
            {
                ctn[j]++;
            }
        }
    }
    ll x = 0;
    ll x2;
    for (int i = 30; i >= 0; i--)
    {
        if (k >= (n - ctn[i]))
        {
            x |= (1 << i);
            k -= (n + ctn[i]);
        }
    }
    x2 = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        x2 &= a[i];
    }
    cout << (x2 | x)<<endl;
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
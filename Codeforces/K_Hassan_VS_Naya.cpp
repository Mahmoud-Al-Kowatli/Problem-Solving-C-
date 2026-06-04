#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll b = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b = gcd(b, x);
    }
    if (b == 1)
    {
        cout << "Naya" << endl;
    }
    else
    {
        cout << "Hassan" << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll l, r;
    cin >> l >> r;
    int ctn = 0;
    ll p2 = 1;
    for (int i = 0; i <= 31; i++)
    {
        ll p3 = 1;
        for (int j = 0; j <= 20; j++)
        {
            ll curent = p2 * p3;
            if (curent > r)
            {
                break;
            }
            if (curent >= l && curent <= r)
            {
                ctn++;
            }
            if (p3 > r / 3)
            {
                break;
            }
            p3 *= 3;
        }
        p2 *= 2;
    }
    cout << ctn << endl;
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
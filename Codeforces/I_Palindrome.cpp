#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll n, w = 0, comp;
    cin >> n;
    comp = n;
    while (n != 0)
    {

        ll last = n % 10;
        n /= 10;
        w = (10 * w) + last;
    }
    cout << w << endl;
    if (comp == w)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
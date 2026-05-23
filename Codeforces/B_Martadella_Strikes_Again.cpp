#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll R, r;
    cin >> R >> r;
    if ((R * R) > (2 * r * r))
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
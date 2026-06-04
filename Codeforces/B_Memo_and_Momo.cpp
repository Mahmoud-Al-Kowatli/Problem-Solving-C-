#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
    {
        cout << "Both" << endl;
        return;
    }
    if (a % k == 0 && b % k != 0)
    {
        cout << "Memo" << endl;
        return;
    }
    if (a % k != 0 && b % k == 0)
    {
        cout << "Momo" << endl;
        return;
    }
    else
    {
        cout << "No One" << endl;
        return;
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
#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;
    bool f = true;
    for (int i = a; i <= b; ++i)
    {
        ll li = i;
        bool lucky = true;
        while (li != 0)
        {
            ll last = li % 10;
            if (last != 4 && last != 7)
            {
                lucky = false;
                break;
            }
            li /= 10;
        }
        if (lucky)
        {
            f = false;
            cout << i << " ";
        }
    }
    if (f)

        cout << -1;
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
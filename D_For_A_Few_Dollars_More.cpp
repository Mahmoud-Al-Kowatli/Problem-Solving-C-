#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define int double

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = a;
    for (int i = 0; i < 10000; i++)
    {
        if(i>=(b/100)*(ans+i))
        {
            cout << ans + i<<endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main()
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
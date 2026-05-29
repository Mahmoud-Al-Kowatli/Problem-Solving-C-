#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int p, x;
    double res;
    cin >> x >> p;
    // p = res *x/100
    res = (p * 100.0) / (100.0 - x);
    cout << fixed << setprecision(2) << res << endl;
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

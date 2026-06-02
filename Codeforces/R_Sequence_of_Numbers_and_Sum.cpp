#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{

    ll n, m, minimum, maximum;
    while (true)
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
        {
            return;
        }
        ll minimum = min(n, m);
        ll maximum = max(n, m);
        int sum = 0;
        for (int i = minimum; i <= maximum; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
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
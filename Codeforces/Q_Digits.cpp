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
    if (n == 0)
    {
        cout << 0;
    }
    while (n != 0)
    {
        ll last = n % 10;
        cout << last << " ";
        n /= 10;
    }
    cout << endl;
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
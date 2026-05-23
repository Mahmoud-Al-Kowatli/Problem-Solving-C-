#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    int last = n % 4;
    if (last == 1)
    {
        cout << 3 << endl;
    }
    if (last == 2)
    {
        cout << 9 << endl;
    }
    if (last == 3)
    {
        cout << 7 << endl;
    }
    if (last == 0)
    {
        cout << 1 << endl;
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
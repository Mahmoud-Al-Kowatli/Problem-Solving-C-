#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a - b) >= 0)
    {
        cout << a - b << endl;
    }
    else
        cout << 0 << endl;

    return;
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
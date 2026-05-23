#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int a, b, ctn = 0;
    cin >> a >> b;
    while (b >= a)
    {
        a = a * 3;
        b = b * 2;
        ctn++;
    }
    cout << ctn;
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
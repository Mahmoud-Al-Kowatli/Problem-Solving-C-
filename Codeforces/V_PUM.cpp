#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int c = 1;

    for (int i = 0; i < n; i++)
    {
        cout << c << " " << c + 1 << " " << c + 2 << " PUM\n";
        c += 4;
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
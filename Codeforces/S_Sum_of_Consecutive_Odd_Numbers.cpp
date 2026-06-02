#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    int x, y, sum = 0;
    cin >> x >> y;
    int minimum = min(x, y);
    int maximum = max(x, y);
    for (int i = minimum+1; i < maximum; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
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
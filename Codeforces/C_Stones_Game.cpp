#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll unsigned long long

void solve()
{
    ll n;
    cin >> n;

    if ((n & (n + 1)) == 0)
    {
        cout << "Second" << "\n";
    }
    else
    {
        cout << "First" << "\n";
    }
}

int main()
{
    go;
    int mk;
    cin >> mk;
    while (mk--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll r;
    cin >> r;

    if (r >= 1900)
    {
        cout << "Division 1\n";
    }
    else if (r >= 1600)
    {
        cout << "Division 2\n";
    }
    else if (r >= 1400)
    {
        cout << "Division 3\n";
    }
    else
    {
        cout << "Division 4\n";
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
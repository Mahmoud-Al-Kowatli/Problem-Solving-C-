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
    int s = n - 1, p = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < p; j++)
        {
            cout << "*";
        }
        cout << endl;
        s--;
        p += 2;
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
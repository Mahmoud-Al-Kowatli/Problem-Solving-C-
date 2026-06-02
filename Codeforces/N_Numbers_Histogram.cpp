#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    char s;
    ll n;
    int a;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;

        for (int j = 0; j < a; j++)
        {
            cout << s;
        }
        cout << endl;
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
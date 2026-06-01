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
    string enemy, gregor;
    cin >> enemy;
    cin >> gregor;

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (gregor[i] == '1')
        {
            if (i > 0 && enemy[i - 1] == '1')
            {
                ans++;
                enemy[i - 1] = '2';
            }
            else if (enemy[i] == '0')
            {
                ans++;
                enemy[i] = '2';
            }
            else if (i + 1 < n && enemy[i + 1] == '1')
            {
                ans++;
                enemy[i + 1] = '2';
            }
        }
    }

    cout << ans << '\n';
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
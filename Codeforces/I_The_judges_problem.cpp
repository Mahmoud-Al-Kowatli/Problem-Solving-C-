#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    vector<ll> fre(11, 0);
    int Maxes = -1, ans = -1;

    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        fre[x]++;
    }

    for (int i = 1; i <= 10; i++)
    {
        if (fre[i] >= Maxes)
        {
            Maxes = fre[i];
            ans = i;
        }
    }

    cout << ans << "\n";
}

int main()
{
    go;
    int mk = 1;
    while (mk--)
    {
        solve();
    }
    return 0;
}
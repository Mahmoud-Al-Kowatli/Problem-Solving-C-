#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, x, count_e = 0, last_e = 0, count_o = 0, last_o = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            count_e++;
            last_e = i;
        }
        else
        {
            count_o++;
            last_o = i;
        }
    }
    if (count_e > count_o)
    {
        cout << last_o << endl;
    }
    else
    {
        cout << last_e << endl;
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
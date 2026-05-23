#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if ((i / 2) % 2 == 0)
                {
                    if (j == m - 1)
                        cout << "#";
                    else
                        cout << ".";
                }
                else
                {
                    if (j == 0)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
        }
        cout << "\n";
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
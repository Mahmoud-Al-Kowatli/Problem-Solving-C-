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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i + j == n - 1)
            {
                cout << "X";
            }
            else if (i == j)
            {
                cout << "\\";
            }
            else if (i + j == n - 1)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
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
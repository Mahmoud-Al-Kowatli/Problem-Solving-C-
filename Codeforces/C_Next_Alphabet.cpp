#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    char c;
    cin >> c;
    if (c == 'z')
    {
        cout << 'a' << endl;
    }
    else
    {

        cout << (char)(c + 1) << endl;
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
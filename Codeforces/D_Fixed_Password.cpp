#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int pass = 1999;
    while (true)
    {
        int s;
        cin >> s;
        if (s == pass)
        {
            cout << "Correct" << endl;
            return;
        }
        else
            cout << "Wrong" << endl;
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
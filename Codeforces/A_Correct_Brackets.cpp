#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    if (s[0] == ')' || s[n - 1] == '(' || n % 2 != 0)
    {
        cout << "NO" << "\n";
        return;
    }

    int open = 0, close = 0;
    for (char c : s)
    {
        if (c == '(')
            open++;
        else
            close++;
    }

    if (open != close)
    {
        cout << "NO" << "\n";
        return;
    }
    int bal = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ')')
        {
            bal++;
        }
        else
        {
            bal--;
        }

        if (bal < 0)
        {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "Yes" << "\n";
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
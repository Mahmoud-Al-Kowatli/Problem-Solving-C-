#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, ctnA = 0, ctnD = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            ctnA++;
        }
        if (s[i] == 'D')
        {
            ctnD++;
        }
    }
    if (ctnA > ctnD)
    {
        cout << "Anton" << endl;
    }
    if (ctnA < ctnD)
    {
        cout << "Danik" << endl;
    }
    if (ctnA == ctnD)
    {
        cout << "Friendship" << endl;
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
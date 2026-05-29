#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> counts;
    int max_freq = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        counts[a[i]]++;
        max_freq = max(max_freq, counts[a[i]]);
    }

    if (max_freq >= (n + 1) / 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
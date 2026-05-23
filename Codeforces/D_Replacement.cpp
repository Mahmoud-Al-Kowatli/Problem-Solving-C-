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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[n - 1] == 1)
    {
        a[n - 1] = 2;
    }
    else
    {
        a[n - 1] = 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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
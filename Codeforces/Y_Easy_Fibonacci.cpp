#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << fib[i] << " ";
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
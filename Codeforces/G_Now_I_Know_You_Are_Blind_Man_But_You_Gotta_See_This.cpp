#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int mul_mod(int a, int b, int m = mod)
{
    return (a * b) % m;
}
int powmod(int base, int exp, int m = mod)
{
    int res = 1;
    base %= mod; // Handle cases where base >= mod
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += mul_mod(mul_mod(i + 1, b[i]), powmod());
        }
        cout << ans << endl;
    }
    return 0;
}
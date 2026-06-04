#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long INF = 1e18;
vector<int> a;
void sieveOfEratosthenes(int n)
{
    std::vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            a.push_back(p);
}
bool prime[100005];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= 100000; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 100000; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= 100000; p++)
        if (prime[p])
            a.push_back(p);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> vis(100005, 0);

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];

        for (int p : a)
        {
            if (p * p > temp)
                break;

            if (temp % p == 0)
            {
                vis[p] = 1;
                while (temp % p == 0)
                {
                    temp /= p;
                }
            }
        }
        if (temp > 1)
        {
            vis[temp] = 1;
        }
    }

    vector<bool> blocked(m + 1, false);

    for (int p : a)
    {
        if (p > m)
            break;

        if (vis[p] == 1)
        {

            for (int j = p; j <= m; j += p)
            {
                blocked[j] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        if (!blocked[i])
        {
            ans++;
        }
    }

    cout << ans << "\n";
}
signed
main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

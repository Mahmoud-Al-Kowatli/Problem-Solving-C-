#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long sum = 0;
    long long target = 2e18;

    for (int i = 1; i <= n; ++i)
    {
        long long a;
        cin >> a;
        sum += a;
        target = min(target, sum / i);
        cout << target << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
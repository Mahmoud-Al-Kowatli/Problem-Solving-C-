#include <bits/stdc++.h>
using namespace std;

void solve()
{
    const int INF = 1e9;
    int n;
    cin >> n;
    string s[2];
    cin >> s[0] >> s[1];

    vector<int> dp(n + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {

        int cr = (s[0][i - 1] != 'R') + (s[1][i - 1] != 'R');
        int cb = (s[0][i - 1] != 'B') + (s[1][i - 1] != 'B');
        dp[i] = min(dp[i], dp[i - 1] + min(cr, cb));
        if (i >= 2)
        {
            int cr1 = (s[0][i - 2] != 'R') + (s[0][i - 1] != 'R');
            int cb1 = (s[0][i - 2] != 'B') + (s[0][i - 1] != 'B');
            int r1 = min(cr1, cb1);

            int cr2 = (s[1][i - 2] != 'R') + (s[1][i - 1] != 'R');
            int cb2 = (s[1][i - 2] != 'B') + (s[1][i - 1] != 'B');
            int r2 = min(cr2, cb2);

            dp[i] = min(dp[i], dp[i - 2] + r1 + r2);
        }
    }

    cout << dp[n] << endl;
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
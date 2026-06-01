#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;

const ll INF = 1e18;
const int MAXN = 200005;

ll tree[4 * MAXN], lazy[4 * MAXN];

void push(int node, int start, int end)
{
    if (lazy[node] != 0)
    {
        tree[node] += lazy[node];
        if (start != end)
        {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

void update(int node, int start, int end, int l, int r, ll val)
{
    push(node, start, end);
    if (start > end || start > r || end < l)
        return;
    if (start >= l && end <= r)
    {
        lazy[node] += val;
        push(node, start, end);
        return;
    }
    int mid = (start + end) / 2;
    update(2 * node, start, mid, l, r, val);
    update(2 * node + 1, mid + 1, end, l, r, val);
    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}

ll query(int node, int start, int end, int l, int r)
{
    push(node, start, end);
    if (start > end || start > r || end < l)
        return INF;
    if (start >= l && end <= r)
        return tree[node];
    int mid = (start + end) / 2;
    return min(query(2 * node, start, mid, l, r), query(2 * node + 1, mid + 1, end, l, r));
}

void solve()
{
    int n, x, s;
    cin >> n >> x >> s;
    string u;
    cin >> u;

    for (int i = 0; i <= 4 * n; ++i)
    {
        tree[i] = 0;
        lazy[i] = 0;
    }

    int cnt = 0;
    int ans = 0;
    vector<int> v;

    for (int i = 1; i <= n; ++i)
    {
        char ch = u[i - 1];
        if (ch == 'I')
        {
            if (cnt < x)
            {
                update(1, 1, n, i, n, s - 1);
                cnt++;
                ans++;
            }
            else if (cnt == x && !v.empty())
            {
                int j = v.back();
                update(1, 1, n, j, n, -s);
                update(1, 1, n, i, n, s - 1);
                if (query(1, 1, n, 1, n) >= 0)
                {
                    v.pop_back();
                    ans++;
                }
                else
                {
                    update(1, 1, n, j, n, s);
                    update(1, 1, n, i, n, -(s - 1));
                }
            }
        }
        else if (ch == 'E')
        {
            update(1, 1, n, i, n, -1);
            if (query(1, 1, n, 1, n) >= 0)
            {
                ans++;
            }
            else
            {
                update(1, 1, n, i, n, 1);
            }
        }
        else if (ch == 'A')
        {
            if (cnt < x)
            {
                update(1, 1, n, i, n, s - 1);
                cnt++;
                ans++;
                v.push_back(i);
            }
            else
            {
                update(1, 1, n, i, n, -1);
                if (query(1, 1, n, 1, n) >= 0)
                {
                    ans++;
                }
                else
                {
                    update(1, 1, n, i, n, 1);
                }
            }
        }
    }
    cout << ans << "\n";
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
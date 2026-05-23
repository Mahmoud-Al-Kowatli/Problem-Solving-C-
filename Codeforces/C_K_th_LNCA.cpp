#include <bits/stdc++.h>
using namespace std;

const int mks = 1005;
vector<int> a[mks];
int up[mks][mks], dow[mks], tot[mks], depth[mks], ctn;

void dfs(int u, int p, int d)
{
    dow[u] = ++ctn;
    depth[u] = d;
    up[u][0] = p;
    for (int i = 1; i < 12; i++)
        up[u][i] = up[up[u][i - 1]][i - 1];

    for (int v : a[u])
    {
        if (v != p)
            dfs(v, u, d + 1);
    }
    tot[u] = ctn;
}

bool is_ans(int u, int v)
{
    return dow[u] <= dow[v] && tot[u] >= tot[v];
}

int get_lca(int u, int v)
{
    if (is_ans(u, v))
        return u;
    if (is_ans(v, u))
        return v;
    for (int i = 11; i >= 0; i--)
    {
        if (!is_ans(up[u][i], v)){
            u = up[u][i];
        }
    }
    return up[u][0];
}

void solve(){
    int n, q;
    cin >> n >> q;
    ctn = 0;
    for (int i = 1; i <= n; i++)
    {
        a[i].clear();
    }
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1, 1, 0);

    while (q--)
    {
        int k, m;
        cin >> k >> m;
        vector<pair<int, int>> nodes(m);
        for (int i = 0; i < m; i++)
        {
            int v;
            cin >> v;
            nodes[i] = {dow[v], v};
        }
        sort(nodes.begin(), nodes.end());

        vector<int> lca;
        int max_d = -1;

        for (int i = 0; i <= m - k; i++)
        {
            int u = nodes[i].second;
            int v = nodes[i + k - 1].second;
            int lca_node = get_lca(u, v);
            lca.push_back(lca_node);
            max_d = max(max_d, depth[lca_node]);
        }

        sort(lca.begin(), lca.end());
        lca.erase(unique(lca.begin(), lca.end()), lca.end());

        int count = 0;
        for (int node : lca)
        {
            if (depth[node] == max_d)
                count++;
        }
        cout << count << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
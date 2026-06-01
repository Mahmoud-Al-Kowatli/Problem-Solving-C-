#include <bits/stdc++.h>
using namespace std;

#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

vector<vector<int>> adj;
vector<int> color;
vector<int> component_vertices;
bool is_bipartite;

void dfs(int u, int c)
{
    color[u] = c;
    component_vertices.push_back(u);
    for (int v : adj[u])
    {
        if (color[v] == 0)
        {
            dfs(v, 3 - c);
        }
        else if (color[v] == color[u])
        {
            is_bipartite = false;
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    adj.assign(n + 1, vector<int>());
    color.assign(n + 1, 0);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    long long total_beautiful = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (color[i] == 0)
        {
            if (adj[i].empty())
            {
                total_beautiful += 1;
                color[i] = 1;
                continue;
            }

            component_vertices.clear();
            is_bipartite = true;

            dfs(i, 1);

            if (!is_bipartite)
            {
                continue;
            }

            int count1 = 0;
            int count2 = 0;
            for (int v : component_vertices)
            {
                if (color[v] == 1)
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }

            total_beautiful += max(count1, count2);
        }
    }

    cout << total_beautiful << '\n';
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
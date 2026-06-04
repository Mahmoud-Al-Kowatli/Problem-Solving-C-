#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

double Area(double h)
{
    return (h * h) / sqrt(3);
}

void solve()
{
    ll h, k;
    cin >> h >> k;
    double area = Area(h);
    for (int i = 0; i < k; i++)
    {
        area *= 0.25;
    }
    cout << fixed << setprecision(6) << area << endl;
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
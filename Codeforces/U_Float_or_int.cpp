#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    double n;
    cin >> n;
    int castVal = (int)n;
    if (n == castVal)
    {
        cout << "int " << n;
    }
    else
    {
        cout << "float " << castVal << " " << (n - castVal);
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
#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    vector<int> Sorted(3);
    vector<int> Origen(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> Origen[i];
    }
    Sorted = Origen;
    sort(Sorted.begin(), Sorted.end());
    for (int i = 0; i < 3; i++)
    {
        cout << Sorted[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << Origen[i] << endl;
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
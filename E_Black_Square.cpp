#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fast;

    int a1, a2, a3, a4;
    int res = 0;
    string s;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {

            res += a1;
        }
        if (s[i] == '2')
        {

            res += a2;
        }
        if (s[i] == '3')
        {

            res += a3;
        }
        if (s[i] == '4')
        {

            res += a4;
        }
    }
    cout << res;
    return 0;
}
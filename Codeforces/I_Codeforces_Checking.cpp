#include <bits/stdc++.h>
using namespace std;
#define go                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    char n;
    cin >> n;
    (n == 'c' || n == 'o' || n == 'd' || n == 'e' || n == 'f' || n == 'o' || n == 'r' || n == 'c' || n == 'e' || n == 's') ? cout << "YES" << endl : cout << "NO" << endl;

    // string s = "codeforces";
    // bool found =false;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if(s[i]==n){
    //         found = true;
    //         break;
    //     }
    // }
    // if(found){
    //     cout << "YES"<<endl;
    // }else{
    //     cout << "NO"<<endl;
    // }
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
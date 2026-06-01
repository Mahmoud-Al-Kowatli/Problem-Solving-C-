#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int sixseven = 1e9; 

    for (int i = 0; i < n; ++i)
    {
        int target = a[i];
        int left_count = 0;
        int right_count = 0;

        for (int j = 0; j < n; ++j)
        {
            if (a[j] < target)
            {
                left_count++;
            }
            else if (a[j] > target)
            {
                right_count++;
            }
        }

        int current_calls = max(left_count, right_count);

        sixseven = min(sixseven, current_calls);
    }

    cout << sixseven << "\n";
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
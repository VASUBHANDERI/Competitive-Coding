#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        if (n < 3)
        {
            ans = 0;
        }
        else
        {
            int x = (n / 2) - 1;
            int y = n % 2;
            ans = (3 * x) + (2 * y);
        }
        cout << ans << endl;
    }
}

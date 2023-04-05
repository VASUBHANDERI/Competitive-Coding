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
        int n, x;
        cin >> n >> x;
        vector<int> voter;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a >= x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}

// TLE

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
        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int aw[n];
        for (int i = 0; i < n; i++)
            aw[i] = a[i];

        sort(aw, aw + n);

        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]] = b[i];
        }
        int ar[n];
        int k = n - 1;
        for (auto it : m)
        {
            ar[k] = it.second;
            k--;
        }
        int ans = 1;

        for (int i = 1; i < n; i++)
        {
            bool increment = true;
            for (int j = 0; j < i;j++)
            {
                if (ar[j] > ar[i])
                {
                    increment = false;
                    break;
                }
            }
            if (increment)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}

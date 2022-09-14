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
        int n, m, d = 0;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int l = a[i] - 1;
            int r = m - a[i];
            if (l > r)
            {
                d = d + l;
            }
            else
            {
                d = d + r;
            }
        }
        cout << d << endl;
    }
}

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
        std::cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }

        int ans = 0;

        for (auto it : m)
        {
            ans = ans + ((it.second * (it.second - 1)) / 2);
        }
        std::cout << ans << std::endl;
    }
}

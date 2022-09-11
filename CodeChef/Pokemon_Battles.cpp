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
        vector<int> v1;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int aw[n], bw[n];
        for (int i = 0; i < n; i++)
            aw[i] = a[i];
        for (int i = 0; i < n; i++)
            bw[i] = b[i];

        sort(aw, aw + n);
        sort(bw, bw + n);

        map<int, int> ma, mb, maw, mbw;

        for (int i = 0; i < n; i++)
        {
            ma[a[i]] = i;
            mb[b[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            maw[aw[i]] = ma[aw[i]];
            mbw[bw[i]] = mb[bw[i]];
        }

        int ara[n], arb[n];

        int j = 0;
        for (auto it : maw)
        {
            ara[j] = it.second;
            j++;
        }
        j = 0;
        for (auto it : mbw)
        {
            arb[j] = it.second;
            j++;
        }

        int s[n];
        for (int i = 0; i < n; i++)
        {
            // int c = 0;
            set<int> s1;
            int k = 0;
            while (ara[k] != i)
            {
                s1.insert(ara[k]);
                k++;
            }
            k = 0;
            while (arb[k] != i)
            {
                s1.insert(arb[k]);
                k++;
            }

            s[i] = s1.size();
        }

        int max = *max_element(s, s + n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == max)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}

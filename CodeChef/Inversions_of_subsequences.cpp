#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#define int long long
int countInversionsEle(vector<int> arr, int n)
{
    vector<int> v;
    set<int> s;

    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    for (int i = 0; i < n; i++)
    {

        auto itr = lower_bound(
            v.begin(), v.end(), arr[i]);

        int x = itr - v.begin();
        if (x > 0)
        {
            s.insert(arr[i]);
        }
        for (int i = 0; i < x; i++)
        {
            s.insert(v[i]);
        }

        v.erase(itr);
    }

    return s.size();
}
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
        vector<int> P;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            P.push_back(x);
        }

        int r = countInversionsEle(P, n);

        int ans = 0;
        if (r == 0)
        {
            ans = pow(2, n) - 1;
        }
        else
        {
            ans = pow(2, (n - r));
        }
        ans = ans % 998244353;
        cout << ans << endl;
    }
}

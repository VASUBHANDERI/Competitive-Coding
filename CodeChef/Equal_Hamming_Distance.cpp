/*
################################
This is not solved yet!
################################
*/

// TODO: Solve It!


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
        int ans = 0;
        int n;
        string a, b;
        cin >> n >> a >> b;
        int doz = 0, dzo = 0,
            d = 0,
            s = 0;
        int ones = 0, zeros = 0;

        ones = count(a.begin(), a.end(), '1');
        zeros = count(a.begin(), a.end(), '0');

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                s++;
            }
            else
            {
                if (a[i] == '1')
                {
                    doz++;
                }
                else
                {
                    dzo++;
                }
                d++;
            }

            if (s == n)
            {
                ans = round(pow(2, s));
            }
            else if (d == n)
            {
                if (doz == 0 || dzo == 0)
                    ans = (round(pow(2, d)) - 2);
                else
                    ans = 0;
            }
            else
            {
                if (doz == 0 || dzo == 0)
                {
                    ans = ((round(pow(2, n - s))) * (round(pow(2, d)) - 2));
                }
                else
                {
                    ans = (round(pow(2, n - s)));
                }
            }
        }
        cout << ans << endl;
    }
}

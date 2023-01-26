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
        string s;
        cin >> n >> s;
        int ans = 0;

        if (s[0] == '1')
        {
            int c = 0;

            while (s[c] == '1' && c < n)
            {
                c++;
                ans++;
            }

            int maxCount = 0;
            int tempCount = 0;

            while (c < n)
            {
                if (s[c] == '1')
                {
                    tempCount++;
                    c++;
                    if (tempCount > maxCount)
                    {
                        maxCount = tempCount;
                    }
                }
                else
                {
                    tempCount = 0;
                    c++;
                }
            }

            ans += maxCount;
        }

        else
        {
            int c = 0;

            int maxCount1 = 0;
            int tempCount1 = 0;
            while (c < n)
            {
                if (s[c] == '1')
                {
                    tempCount1++;
                    c++;
                    if (tempCount1 > maxCount1)
                    {
                        maxCount1 = tempCount1;
                    }
                }
                else
                {
                    tempCount1 = 0;
                    c++;
                }
            }
            ans = maxCount1;
        }

        cout<<ans<<endl;
    }
}

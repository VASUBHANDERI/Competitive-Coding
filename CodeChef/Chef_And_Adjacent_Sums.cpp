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
        vector<int> A;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            A.push_back(a);
        }
        vector<int> B = A;

        sort(B.begin(), B.end());

        int z = B[n - 1] + B[n - 2];

        int x = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (B[i] == B[n - 2])
            {
                x++;
            }
        }

        bool valid = true;

        if (B[n - 1] == B[n - 2])
        {
            if (x > 1)
            {
                if ((n - (x + 1)) < (x))
                {
                    valid = false;
                }
            }
            else
            {
                if ((n - (x + 1)) < 1)
                {
                    valid = false;
                }
            }
        }
        else
        {
            if ((n - (x + 1)) < 1)
            {
                valid = false;
            }
        }

        if (valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

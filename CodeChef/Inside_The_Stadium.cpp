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
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int r;
            cin >> r;
            sum += r;
            if (sum == (i + 1))
            {
                count++;
            }
        }
        cout << count << endl;
    }
}

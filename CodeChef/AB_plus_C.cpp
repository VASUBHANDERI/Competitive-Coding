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
        int x;
        cin >> x;
        if (x < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            int a = 1000000;
            if (x <= a)
            {
                cout << 1 << " " << 1 << " " << x - 1 << endl;
            }
            else if (x % a > 0)
            {
                cout << (x / a) << " " << a << " " << x % a << endl;
            }
            else
            {
                cout << (x / a) - 1 << " " << a << " " << a << endl;
            }
        }
    }
}

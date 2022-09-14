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
        bool in = true;
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if (a[i] == 1)
            {
                in = false;
                break;
            }
        }

        if (in)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
}

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
        string n;
        cin >> n;
        vector<char> ans;
        if (n.length() < 2)
        {
            cout << n << endl;
        }
        else if (n.length() == 2 && n[0] == 1)
        {
            cout << n << endl;
        }
        else
        {
            int length = n.length();
            int slast = n[length - 2] - '0';
            int last = n[length - 1] - '0';
            if (slast % 2 == 0)
            {
                cout << last << endl;
            }
            else
            {
                cout << (10 + last) << endl;
            }
        }
    }
}
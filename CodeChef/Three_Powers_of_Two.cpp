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
        int indexSum = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;

        int c = count(s.begin(), s.end(), '1');

        if (c > 1 && c < 4)
        {
            cout << "YES" << endl;
        }
        else if (c == 1)
        {
            if (s[n - 1] == '1')
                cout << "NO" << endl;
            else if (s[n-2] == '1')
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

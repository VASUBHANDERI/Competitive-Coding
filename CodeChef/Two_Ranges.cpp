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

        set<int> s;
        int x, y, a, b;
        cin>>x>>y>>a>>b;
        for (int i = x; i <= y; i++)
        {
            s.insert(i);
        }
        for (int i = a; i <= b; i++)
        {
            s.insert(i);
        }

        cout << s.size() << endl;
    }
}
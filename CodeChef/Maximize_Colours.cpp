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
        int r, g, b;
        cin >> r >> g >> b;
        vector<int> v;
        v.push_back(r);
        v.push_back(g);
        v.push_back(b);
        sort(v.begin(), v.end(), greater<int>());
        int base = 3;
        for (auto it : v)
        {
            if (it == 0)
                base--;
        }
        if (base != 0)
        {
            int count = base;
            for (int i = 0; i < count - 1; i++)
            {
                for (int j = i + 1; j < count; j++)
                {
                    if (v[i] > 1 && v[j] > 1)
                    {
                        base++;
                        v[j]--;
                        v[i]--;
                    }
                }
            }
        }
        cout << base << endl;
    }
}

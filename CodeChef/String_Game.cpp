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

        string s;
        cin >> s;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            b.push_back(s[i] - '0');
        }


        int count = 0;

        bool found = true;
        int si = 0;
        while (found)
        {
            found = false;
            for (int i = si; i < n - 1; i++)
            {
                if (b[i] != b[i + 1])
                {
                    if(i>0){
                        si = i-1;
                    }
                    n = n - 2;
                    b.erase(b.begin() + i, b.begin() + i + 2);
                    found = true;
                    count++;
                    break;
                }
            }
            

        }

        if (count % 2)
        {
            cout << "Zlatan" << endl;
        }
        else
        {
            cout << "Ramos" << endl;
        }
    }
}

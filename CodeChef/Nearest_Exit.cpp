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
            if (x <= 50)
            {
                cout << "LEFT" << endl;
            }
            else
            {
                cout << "RIGHT" << endl;
            }
        }
    }

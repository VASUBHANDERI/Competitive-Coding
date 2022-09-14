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
        int k;
        cin >> n;
        cin >> k;

        int cf= (n+k-1)/k;
        k=k*cf;

        cout<<(n+k-1)/n<<endl;
    }
}

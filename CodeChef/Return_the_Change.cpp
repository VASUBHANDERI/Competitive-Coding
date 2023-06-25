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
        cin>> n;
        if(n%10>=5){
            cout<<100-(n+(10-(n%10)))<<endl;
        }
        else{
            cout<<100-(n-(n%10))<<endl;
        }

    }
}


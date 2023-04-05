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
        cin>>n;
        string s;
        cin>>s;
        vector<int> sv;
        for(int i = 0;i<s.length();i++){
            sv.push_back(s[i]-'0');
        }
        


        int zeroFirst = 0;
        int oneFirst = 0;

        vector<int> zf;
        vector<int> of;

        zf.push_back(0);
        of.push_back(1);

        for(int i = 1;i<n;i++){
            zf.push_back(zf[i-1]^sv[i-1]);
            of.push_back(of[i-1]^sv[i-1]);
        }

        for(int i = 0;i<n;i++){
            zeroFirst+=zf[i];
            oneFirst+=of[i];
        }


cout<< max(zeroFirst,oneFirst)<<endl;
        
        

    }
}

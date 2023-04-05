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
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        vector<char> ans;

        for(int i = 0;i<s.length();i++){
            ans.push_back(s[i]);
        }

        if(ans[0]=='0'){
            ans[0]='1';
            k--;
        }
        while(k>0){
            ans.push_back('0');
            k--;
        }
        for(auto it: ans){
            cout<<it;
        }
        cout<<endl;


    }
}

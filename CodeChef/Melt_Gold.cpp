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
        int x,y;
        cin>>x>>y;
        int t=1;
        while(y<x){
            if((y+t)<x){
                y=y+t;
                t++;
            }
            else{
                break;
            }
        }
        cout << t << endl;
    }
}

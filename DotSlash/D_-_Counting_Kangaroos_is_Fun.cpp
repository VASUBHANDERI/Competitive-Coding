// TLE

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

    int n;
    cin>>n;
    int a[n],v[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[i]=1;
    }

    sort(a,a+n,greater<int>());

    int ans = n;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[j]!=0 && a[j]*2<=a[i]){
                v[j]=0;
                ans--;
                break;
            }
        }
    }

    
    cout<<ans;
   
}

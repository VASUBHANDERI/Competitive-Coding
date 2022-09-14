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
    int q;
    cin >> n;
    cin >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    while (q--)
    {
        int x;
        cin>>x;
       
        if(x<a[n-1]){
            if (n % 2 == 0)
                cout << "POSITIVE" << endl;
            else
                cout<< "NEGATIVE"<< endl;
        }
        else {
            int c=0;
            // while(a[c]>x){
            //     c++;                
            // }
            int h=n-1;
            int l=0;
            bool zero=false;
            
            while(h>l){
                int mid = (h + l) / 2;
                if (x>a[mid]){
                    h=mid-1;
                }
                else{
                    if(x==a[mid]){
                        zero=true;
                    }
                    else if(x<a[mid] && x>a[mid+1]){
                        c=mid+1;
                    }
                    else{
                        l=mid+1;
                    }
                }
            }
            if(zero){
                cout<<0<<endl;
            }
            else if(c%2==0){
                cout<<"POSITIVE"<<endl;
            }
            else{
                cout<<"NEGATIVE"<<endl;
            }
        }
        
    }
}

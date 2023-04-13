// TODO TLE is coming in this code try submitting it after contest!

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
        vector<int> A;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
        }
        int q;
        cin >> q;
        vector<int> Q;
        for (int i = 0; i < q; i++)
        {
            int y;
            cin >> y;
            Q.push_back(y);
        }

        vector<int> ans;
        for (int i = 0; i < q; i++)
        {
            int min = *max_element(A.begin(), A.end());
            int ind = 0; // this line is causing wrong answers
            for (int i = 0; i < A.size(); i++)
            {
                if (A[i] == min)
                {
                    ind = i;
                    break;
                }
            }

            for (int j = 0; j < A.size(); j++)
            {

                if (__gcd(A[j], Q[i]) > 1 && A[j] < min)
                {
                    ind = j;
                    min = A[j];
                }
            }

            if (__gcd(A[ind], Q[i]) == 1)
            {
                ans.push_back(*min_element(A.begin(), A.end()));
                A.erase(min_element(A.begin(), A.end()));
            }
            else
            {
                ans.push_back(A[ind]);
                A.erase(A.begin() + ind);
            }
        }

        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}

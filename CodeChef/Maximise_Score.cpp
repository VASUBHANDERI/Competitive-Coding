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
            int a;
            cin >> a;
            A.push_back(a);
        }

        vector<int> maxScoreList;

        for (int i = 0; i < n; i++)
        {

            if (i == 0)
            {

                maxScoreList.push_back(abs(A[i] - A[i + 1]));
            }
            else if(i == (n-1)){
                maxScoreList.push_back(abs(A[i] - A[i - 1]));
            }
            else
            {

                maxScoreList.push_back(max(abs(A[i] - A[i + 1]), abs(A[i] - A[i - 1])));
            }
        }

        cout << *min_element(maxScoreList.begin(), maxScoreList.end()) << endl;
    }
}

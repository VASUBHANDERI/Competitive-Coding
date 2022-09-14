// Wrong Answer

#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#define int long long

signed gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

signed findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, kp;
        cin >> n >> kp;
        int count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ga = findGCD(a, n);

        int k = 0;
        while (k < n)
        {
            if (a[k] == ga)
            {
                count++;
                k++;
            }
            else
            {
                int r = a[k];
                while (k < n)
                {
                    r = gcd(a[k], r);
                    k++;
                    if (r == ga)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        if (count >= kp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

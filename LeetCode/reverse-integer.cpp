/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // #############
    // Brute Force
    // #############
    // int reverse(int x)
    // {
    //     int max = INT32_MAX;
    //     int min = INT32_MIN;
    //     long long ans;
    //     string str = to_string(x);
    //     std::reverse(str.begin(), str.end());
    //     if (x > 0)
    //         ans = stol(str);
    //     else
    //         ans = stol(str) * -1;

    //     if (ans > max || ans < min)
    //         ans = 0;

    //     return ans;
    // }

    // ################
    // Better
    // ################

    int reverse(long long x)
    {
        long long ans = 0;
        bool neg = false;
        if (x < 0)
        {
            x = -1 * x;
            neg = true;
        }

        while (x > 0)
        {
            int d = x % 10;
            ans = (ans * 10) + d;
            if (ans > INT32_MAX)
            {
                return 0;
            }
            x = x / 10;
        }

        if (neg)
        {
            return ans * -1;
        }
        return ans;
    }
};
// @lc code=end

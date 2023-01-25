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
    int reverse(int x)
    {
        int max = INT32_MAX;
        int min = INT32_MIN;
        long long ans;
        string str = to_string(x);
        std::reverse(str.begin(), str.end());
        if (x > 0)
            ans = stol(str);
        else
            ans = stol(str) * -1;

        if (ans > max || ans < min)
            ans = 0;

        return ans;
    }
};
// @lc code=end

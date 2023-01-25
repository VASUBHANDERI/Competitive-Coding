/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        else
        {
            string str = to_string(x);
            string rstr = str;
            ::reverse(rstr.begin(), rstr.end());
            if (str == rstr)
                return true;
            else
                return false;
        }
    }
};
// @lc code=end

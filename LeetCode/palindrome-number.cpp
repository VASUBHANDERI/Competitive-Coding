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
    // ##############################
    // Brute Force
    // ##############################
    //  bool isPalindrome(int x)
    //  {
    //      if (x < 0)
    //          return false;
    //      else
    //      {
    //          string str = to_string(x);
    //          string rstr = str;
    //          ::reverse(rstr.begin(), rstr.end());
    //          if (str == rstr)
    //              return true;
    //          else
    //              return false;
    //      }
    //  }
    // ##############################
    // Better Approach
    // ##############################
    bool isPalindrome(long long x)
    {
        if (x < 0)
        {
            return false;
        }
        long long X = x;
        long long rev_x = 0;
        while (X > 0)
        {
            int d = X % 10;
            rev_x = (rev_x * 10) + d;
            X = X / 10;
        }
        return (x == rev_x);
    }
};
// @lc code=end

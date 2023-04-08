/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zero = 0;
        int one = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                one++;
            }
            else if (nums[i] == 0)
            {
                zero++;
            }

            nums[i] = 2;
        }

        for (int i = 0; i < zero; i++)
        {
            nums[i] = 0;
        }
        for (int i = zero; i < zero + one; i++)
        {
            nums[i] = 1;
        }
    }
};
// @lc code=end

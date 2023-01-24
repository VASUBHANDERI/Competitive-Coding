/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        
        if (all_of(nums.begin(), nums.end(), [](int i)
                   { return i < 0; }))
        {
            return *max_element(nums.begin(), nums.end());
        }
        else{
            int max = nums[0];
            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                sum += nums[i];
                if (sum < 0 && nums.size() > 1)
                {
                    sum = 0;
                }
                if (sum > max)
                {
                    max = sum;
                }
            }
            return max;
        }
        
    }
};
// @lc code=end

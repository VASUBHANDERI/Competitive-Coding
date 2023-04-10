/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        return ((nums.size() * (nums.size() + 1)) / 2) - accumulate(nums.begin(), nums.end(), 0);
    }
};
// @lc code=end

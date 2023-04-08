/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution
{
public:
     void moveZeroes(vector<int> &nums)
    {
        
        int curIndex = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[curIndex] = nums[i];
                curIndex++;
            }
        }
        while (curIndex < nums.size())
        {
            nums[curIndex] = 0;
            curIndex++;
        }
    }
};
// @lc code=end
